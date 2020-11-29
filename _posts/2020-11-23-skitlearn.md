---
title: "[ Read ] skitlearn 机器学习的一些初步认知"
subtitle: "「笔记」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
---

# Data Analysis Basic Knowledge

https://scikit-learn.org/  
https://archive.ics.uci.edu/ml/datasets.php  

```
feature |
        | -> data
sample  |

X = [[1,2,3],
 [4,5,6],
 [7,8,9]]
```

- feature: 1,2,3,4,5,6,7,8,9  each data is feature
- sample:  上面的代码注释当中，`X` is sample, 多各 feature 组成一个 sample，一个 sample 和 target，则是训练所需要的数据。
- target/label 是 sample 所代表的内容。
- X 代表样本数据(sample)
- y 代表结果(target)

# 算法 
## 涉及到的算法
https://scikit-learn.org/stable/supervised_learning.html#supervised-learning
### 常用算法列举
- Decision Tree
- GradientBoostingClassifier
- K-Means
- Logistic Regression


#### Decision Tree
这个算法充分利用了二分法。  
算法的计算方式是，运算出每一个 feature 的值，根据 feature 的值进行二分。 虽然 sample 可能是无限的，但是 feature 是有限的。  
feature 的组合方式也是有限的，decision Tree 就是将每一个 feature 的值二分为 True 或者 False，再将这些 Feature 进行组合。  
一个 decision Tree 的所有可能性是 2^count(feature) 的可能性。  

那么决定二分的这个算法，基于两种理论， 分别是 gini 以及 entropy；  

```
from sklearn.tree import DecisionTreeClassifier
import pandas as pd
import numpy as np

sample = [0,1,2,3,4,4,4,4]

dtc = DecisionTreeClassifier()
features_columns = ['pregnant','glucose','bp','skin','insulin','bmi','pedigree','age']
X = data[features_columns]
y = data.label
dtc.fit(X,y)

y_pred = dtc.predict(np.array(sample).reshape(1,-1))

print (y_pred)

```

#### K-Means
该算法总体下来的理解就是多维度的 group by。  
相较于 classfication 的算法从数据中训练算法，Clustering 的算法更多的是从数据中提取特征，并根据这个特征将数据分组（这个特征的定义是，多个 feature 的集合）  
根据这些分组，以及这些特征，我们可以针对性的推送内容，或者对分组内的数据进行一定的干预。  
例： 对公司评价比较低同时评分比较好的同事，可以提前咨询在公司存在的问题，进而避免离职；  
对公司评价比较高，同时评分比较高的同事，可以考虑是瓶颈期已到，可以提出转岗需求。  


#### GradientBoostringClassfier
## 算法一般分类
- Regression
- Classification
classification 的逻辑更多是，从数据当中提取更多的逻辑，然后将逻辑应用在其他的数据当中，进行预测。  
这种预测更多的是，将数据分类的方式。  
- Clustering
clustering 的逻辑是，提取离散数据当中的概念，一般是提前准备好多个维度，然后针对这些维度，直接生成数据聚合的结果。  
上面提取的这些结果，可能以图表的形式进行显示。 直接给予人一定的商业价值。  

# 机器学习方法
## Model Selection
在数据运算的过程当中，训练的数据集是一定的.  
训练集一般分为训练样本，也结果结果，在程序中一般使用 X，y 来进行表示。  
在现有的基础上，我们可以吧训练的数据集，进行拆分。一部分为训练集，一个部分为测试集合。  
进而把训练集提供给到算法进行计算，得到一些函数（在程序成，也就放在一个对象下面）  
然后，把测试机的 sample 提供给到现有的函数（对象）进行预测。
最后，把预测的结果，测试集合当中的 target 进行比对，算出准确率。

## PreProcessing
在 sample 的处理过程当中，训练算法的输入源所对应的数据结构需要是一致的，那么将数据源进行一致化的过程，称之为 preprocessing。
例如在 numpy 当中，可以通过 array 来定义一个数据集，进而通过 reshape 进行处理。而在 reshape(a,b)当中，a 代表的是 sample， b 代表的是 feature。
