# make pml file
# import stuff
import sys
import os 

## how to use
## python get_surface_residues pdbid chains
## needs pymol to work 

def get_surface_residues(pdbid_chains):
	#pdbid = sys.argv[1]
	parts = pdbid_chains.split('_')
	pdbid = parts[0]
	chainsarg = parts[1]
	# fetch pdb
	os.system('rm %s.pdb' % pdbid)
	os.system('wget https://files.rcsb.org/download/%s.pdb' % pdbid)

	#chainsarg = sys.argv[2]
	chains = list(chainsarg)
	chainsstr = '+'.join(chains)

	pmlcontent = 'run findSurfaceResidues.py\n'
	pmlcontent += 'load %s.pdb\n' % pdbid
	pmlcontent += 'select chains_%s, chain %s\n' % (chainsarg, chainsstr)
	pmlcontent += 'findSurfaceResidues chain %s\n' % chainsstr
	pmlcontent += 'save surface_residues_%s_%s.pdb, exposed_res_01\n' % (pdbid, chainsarg)
	pmlcontent += 'quit'

	outname = 'surface_residues_%s_%s.pml' % (pdbid, chainsarg)
	outfile = open(outname, 'w')
	outfile.write(pmlcontent)
	outfile.close()

	os.system('pymol %s' % outname)

	print(pmlcontent)


# run stuff
infile = 'listFiles.txt'
pdbid_chainss = open(infile).read().splitlines()
print(pdbid_chainss)
for pdbid_chains in pdbid_chainss[:]:
	get_surface_residues(pdbid_chains)
	

