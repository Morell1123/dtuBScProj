'''This code is responsible for encoding the Unirep data. The Unirep
and fair-esm require input to be formatted a little differently from
the other encodings used in these experiments -- 
also, in contrast to the other encodings, Unirep and fair-esm do not use Chothia
numbering. The sequence encodings are generated by writing to a FASTA
file with the category info etc in the descriptions, then
feeding the fasta to the TAPE project tokenizer with the pretrained unirep
language model.'''

#Author: Jonathan Parkinson <jlparkinson1@gmail.com>

import os, numpy as np, torch, argparse, sys
import subprocess
from ..utilities.model_data_loader import load_data


def encode():
    """This function places two command line subprocess calls to TAPE
    to embed the aa sequences using the unirep pretrained model. These
    calls will generate npz files. This piece is computationally
    more expensive than any of the other encoding operations --
    expect this to take a little longer than generating the one-hot
    or autoencoder sequences."""
    subprocess.call(["tape-embed", "unirep", "fair_unirep_train.faa", "train.npz",
        "babbler-1900", "--tokenizer", "unirep"])
    subprocess.call(["tape-embed", "unirep", "fair_unirep_test.faa", "test.npz",
        "babbler-1900", "--tokenizer", "unirep"])

def convert_npz_to_torch():
    """This function converts the npz files generated by the TAPE call
    into PyTorch tensors."""
    test = np.load("test.npz", allow_pickle=True)
    train = np.load("train.npz", allow_pickle=True)
    testlist = list(test.keys())
    trainlist = list(train.keys())
    xtrain, xtest, ytrain, ytest = [], [], [], []
    for key in trainlist:
        xtrain.append(train[key].tolist()["pooled"])
        ytrain.append(np.asarray([float(z) for z in key.split('_')[1:]]))
    for key in testlist:
        xtest.append(test[key].tolist()["pooled"])
        ytest.append(np.asarray([float(z) for z in key.split('_')[1:]]))

    xtrain, xtest = np.stack(xtrain), np.stack(xtest)
    ytrain, ytest = np.stack(ytrain), np.stack(ytest)
    xtrain = torch.from_numpy(xtrain).float()
    xtest = torch.from_numpy(xtest).float()
    ytrain = torch.from_numpy(ytrain).float()
    ytest = torch.from_numpy(ytest).float()
    torch.save(xtrain, "unirep_trainx.pt")
    torch.save(xtest, "unirep_testx.pt")
    torch.save(ytrain, "unirep_trainy.pt")
    torch.save(ytest, "unirep_testy.pt")
    os.remove("train.npz")
    os.remove("test.npz")

def unirep_encoding_wrapper(start_dir):
    """Convenience function for generating the unirep encoding."""
    os.chdir(os.path.join(start_dir, "encoded_data"))
    fnames = os.listdir()
    for fname in ["fair_unirep_train.faa", "fair_unirep_test.faa"]:
        if fname not in fnames:
            print("Fasta files not yet generated.")
            return
    os.chdir(start_dir)
    encoded_data = load_data(start_dir, "unirep")
    if encoded_data[0] is not None:
        print("Unirep already encoded.")
        return
    encode()
    os.chdir(os.path.join(start_dir, "encoded_data"))
    convert_npz_to_torch()