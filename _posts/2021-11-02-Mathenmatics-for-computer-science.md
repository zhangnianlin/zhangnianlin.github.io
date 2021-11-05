---
title: "[ Learn ] MIT Online Course Mathematics for computer science"
subtitle: "「笔记」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 离散数学
  - 基础
---

# Mathematics for Computer Science(MIT)
https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-042j-mathematics-for-computer-science-spring-2015/


## Proof

### state machine

不变性.

application one:

一个桶能装 3 斤水. 一个桶能装 5 斤水. 如何得出 4 斤水?
only have 5 & 3. + -
P 第一个是5, 第二个是3
P(0,0) -> P(5,0) -> P(2, 3) -> P(0, 2) -> P(5, 2) -> P(4, 3)
第一个桶得到4斤水.

application two:

机器人在坐标系当中, 只能按照对角线移动, (0,0) 能够 移动到 (1,0) 吗? 


application three:
如何用寄存器 x,y,z,r 来快速计算 a^b.


### countable & uncountable

*halting problem*

这个问题表示很不能理解.

问题的定义应该是说, 是否存在一个程序, 可以计算出字符串是否可数.

如果可数, 那么就返回, 不可数, 返回错误.

根据课程的定义是说, 确定了一个程序 Q, 假设其能够判断.

Q(string) 返回 yes
Q() 返回 no

紧接着, 又定义了一个 Q' , 说, Q' 和 Q 执行完全相反的操作. 
Q' (可数) 不返回
Q' (不可数) 返回 yes

_这个地方得出了矛盾, 不懂_
尝试输入一个参数 t, 作为 Q' 程序本身. 
t 本身可数, 所以 Q'(t) 将不返回.
而根据 Q' 的定义, 它之后在 not(t halts) 的时候返回.

GCD theorem
1. Prime Factorization
2. 欧几里得法得 gcd 
3. 线性组合
