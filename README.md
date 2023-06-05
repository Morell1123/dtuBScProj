# dtuBScProj
Before runnign any code, go to x and install Absolut!

Then install all dependencies in requirements.txt
Once absolut is set up and ready to go, do the following to run a trial
- Go to the file bo/config.py to select yout settings.
- Select your antigen targets in dataloader/core_antigen.txt
- run main.py for AntbO and main_cross_bind.py for AntMOBO
  for example run this command:  python ./bo/main.py --config ./bo/config.yaml --n_trials 5 --seed 42 --antigens_file ./dataloader/core_antigens.txt 


