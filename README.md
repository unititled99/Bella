# Bella

Target Dependent Sentiment Analysis (TDSA) framework.


## Requirements and installation
1. Only been tested on Ubuntu 14.04 and 16.04
2. Python Tested with 3.6 and known to not work with anything less than 3.5.
3. pip3 install -r requirements.txt
4. To use the [Tweebo Parser](./tools/TweeboParser) requires *gcc* and *cmake*. Tweebo will also automatically install when you first import the dependency_parsers module **BUT** would recomend installing it before by running the script [./tools/TweeboParser/install.sh](./tools/TweeboParser/install.sh). This will take at least 15 minutes and depends on your Internet connection. **NOTE** permission to all files within ./tools/TweeboParser is very important I would recomend running: chmod -R 777 ./tools/TweeboParser
5. Docker - This is required to run Stanford CoreNLP. To install docker (Note requires sudo therefore might be best to look at the script and choose the commands you want to use) on Ubuntu run [docker_install](./docker_install.sh) will remove old or new version of docker with the specified one in the script. It will also pull the Stanford CoreNLP container and run it in the background.

## Data and Word vectors and where to store them

All of the experiments that we run require you to get the word vectors and datasets due to licenses and thinking they should not be stored in the code base. We require you to store the data and word vectors where they are stated in the [config file](./config.yaml). The datasets [notebook](./notebooks/datasets.ipynb) states the different datasets we use and where to find them on the internet.

The Glove word vectors will automatically download for you when you call them for the first time but this will take up to 30 minutes to run.

The SSWE and the Word2Vec vectors from [Vo and Zhang](https://www.ijcai.org/Proceedings/15/Papers/194.pdf) Target Dependent method can be found [here](https://github.com/bluemonk482/tdparse/tree/master/resources/wordemb).

Lastly for the sentiment lexicons.
1. MPQA can be found [here](http://mpqa.cs.pitt.edu/lexicons/subj_lexicon/)
2. NRC [here](http://saifmohammad.com/WebPages/NRC-Emotion-Lexicon.htm)
3. Hu and Liu [here](https://www.cs.uic.edu/~liub/FBS/sentiment-analysis.html#lexicon)



## [Running the notebooks](./notebooks)
We use [Python markdown](https://jupyter-contrib-nbextensions.readthedocs.io/en/latest/nbextensions/python-markdown/readme.html) in the notebooks which requires [jupyter](http://jupyter.org/) extension Python markdown. To install this run:
`bash jupyter_extensions.sh`
If an errors occur this could be due to jupyter directories being installed under root. This can be overcome by changing ownership of those directories to your user account or running the previous command as root. To find the directories jupyter uses run the following command:
`jupyter --paths`
Also if none of the markdown containing the python code is rendering correctly ensure that the notebook is trusted (this appears in the top right of your jupyter notebook).

## The notebooks

Can be found [here](./notebooks)

1. The Mass evaluation notebooks are the following
  1. [Mass Evaluation - TDParse](./notebooks/Mass%20Evaluation%20-%20TDParse.ipynb) for the Target dependent models
  2. [Mass Evaluation - Target Dependent](./notebooks/Mass%20Evaluation%20-%20Target%20Dependent.ipynb) for the TDParse models
  3. [Mass Evaluation LSTM](./notebooks/Mass%20Evaluation%20LSTM.ipynb) for the LSTM models
  All of these do not contain any analysis just demostartes how we gathered the results. If you would like to re-run them you can but they take a long time to run and takes a lot of resources. Lastly they also create the model zoo that takes around 200GB of Hard drive space. For the analysis of the Mass evaluations see [Mass Evaluation Result Analysis](./notebooks/Mass%20Evaluation%20Result%20Analysis.ipynb) notebook
2. For the analysis of the reproduction of the Target Dependent model of [Vo and Zhang](https://www.ijcai.org/Proceedings/15/Papers/194.pdf) see this [notebook](./notebooks/target_model.ipynb)
3. For the analysis of the reproduction of the TDParse model of [Wang et al.](https://aclanthology.coli.uni-saarland.de/papers/E17-1046/e17-1046) see this [notebook](./notebooks/TDParse.ipynb)
4. For the analysis of the reproduction of the LSTM models of [Tang et al.](https://www.aclweb.org/anthology/C16-1311) see this [notebook](./notebooks/LSTM.ipynb)
5. For the statistics of the datasets and where to find them see this [notebook](./notebooks/datasets.ipynb)
6. For the code on creating training and test splits for the YouTuBean dataset see this [notebook](./notebooks/YouTuBean dataset splitting.ipynb)
7. For the code on creating training and test splits for [Mitchel et al.](https://www.aclweb.org/anthology/D13-1171) dataset see this [notebook](./notebooks/Mitchel et al dataset splitting.ipynb) 

If you would like to run any of the notebooks to test the model I would recomend running notebooks from points 5, 6, 7 or 8


## Model Zoo

This can be found at this Google Drive [folder](https://drive.google.com/open?id=1hvt2bphAh9wKFRd0JFWU7pkf1yPee4RR). **Note** that if not all of them are there that is due to the folder containg around 200GB of data therefore if you are going to download the models I would recomend downloading one at a time or only the ones you need.
