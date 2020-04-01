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
- training pipeline (using the learned embeddings to train a sentiment classifier)
- predictions pipeline (using the learned embeddings and the trained classifier to predict tweets sentiment)

#### Next up: 
- smarter preprocessing (hashtags, punctuation, ...)
- more rigorous model assessment
- training data analysis (using a simple linear model, which words would have more predictive power? ...)

*Note*: to be able run this notebook you need to have the *.zip* datasets in your current working file system, or in your *Google Drive* folder.

## Writing like Dante

<img src="https://github.com/GiuliaLanzillotta/exercises/blob/master/Dante.jpg" width=300 align=right>

This comes from ```Machine Perception``` class ```@ETH``` during 2020 spring semester. <br>
The inspiration from this notebook was drawn from [this beautiful blog post](http://karpathy.github.io/2015/05/21/rnn-effectiveness/).
The idea is to train an LSTM on *character-level text prediction* using a single .txt file. I chose a text from the [Gutenberg](http://www.gutenberg.org/) repository, namely *la Divina Commedia* , by *Dante Alighieri*. 
<br> Maybe what is most exciting about this work is perfectly synthesized by *Andrej Karpathy* (the author of the blog post): 
 > There’s something magical about Recurrent Neural Networks (RNNs). [...] Sometimes the ratio of how simple your model is to the quality of the results you get out of it blows past your expectations, and this was one of those times. 
 
On the right a preview of the results. 
