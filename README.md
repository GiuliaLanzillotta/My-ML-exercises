# (Maybe interesting) exercises
I'll group here some (maybe interesting) exercises on machine learning-related problems. 

## Collaborative filtering exercise

This comes from ```Computational Intelligence Lab``` class ```@ETH``` during 2020 spring semester. <br>
The exercise explores basic matrix completion/factorization techniques and exposes their limitation. 
Also, you'll find an hand-made implementation of SGD.

## PLSA exercise
This comes from ```Computational Intelligence Lab``` class ```@ETH``` during 2020 spring semester. <br>
The exercise explores Probabilistic latent semantic analysis as presented in the paper https://arxiv.org/pdf/1301.6705.pdf. 
The goal of the exercise is to implement PLSA by using the EM algorithm, and to apply it to the Associated Press corpus dataset.

## CNN exercise (in fieri)

<img src="https://github.com/GiuliaLanzillotta/exercises/blob/master/ComputationalGraph.jpg" width=200 align=right>

This comes from ```Machine perception``` class ```@ETH``` during 2020 spring semester. <br>The exercise explores the building blocks of a Convolutional Neural Network from a low level implementation perspective (```@tensorflow 1.x```). Going through the exercise challenges one's understanding of the basics of the ```Tensorflow``` library, and offers an overview of some good common practices (```name scopes```,```variable initialization ```,```summaries```,...)
#### Future work
The first version of the exercise uses the classic MNIST dataset. Ideally, a second version will also focus on assembling a personal dataset. <br>
<br> On the right, an overview of the computational graph, from ```Tensorboard```. 

## Sentiment analysis exercise (in fieri)
This comes from ```Computational Intelligence Lab``` class ```@ETH``` during 2020 spring semester. <br>
This is an exploratory notebook used for the (ongoing) *Kaggle Competition* https://www.kaggle.com/c/cil-text-classification-2020/data.

Up until now in the notebook I have implemented:
- vocabulary extraction 
- **GloVe** embedding training with **Stochastic Gradient Descent**

#### Next up: 
- smarter preprocessing 
- classification pipeline completion

*Note*: to be able run this notebook you need to have the *.zip* datasets in your current working file system, or in your *Google Drive* folder.
