---
title: "[Reading] skitlearn 机器学习的一些初步认知"
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

# 涉及到的算法
https://scikit-learn.org/stable/supervised_learning.html#supervised-learning
## 常用算法列举
- Decision Tree
- K-Means
- Logistic Regression

算法一般分类
- Regression
- Classification
- Clustering

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
