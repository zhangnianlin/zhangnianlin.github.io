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
### proof technique

#### proof by contradiction
#### proof by cases

### Well Ordering Principle
### Binary Relation
二元关系, 就是两个 set 之间, 每个元素之间的关系一个集合.

A 与 B 集合, 就存在 A 中的每一个元素而言, 于 B 中的元素有 (>= 1,1, <=1) 三种形式存在.   
- >=1 A 的每一个元素, 与 B 中 >=1 个元素存在关系, 称之为 total.  
- <=1 A 中的每一个元素, 与 B 中的 <=1 的元素存在关系, 称之为 function.  
而就 B 中的每一个元素, 与 A 中的元素有 (>=1, 1, <=1 ) 三种形式存在.  
- >=1 B 中的每个元素, 与 A 中的 >=1 个元素存在关系, 称之为 surjection.  
- <=1 B 中的每个元素, 与 A 中的 <=1 个元素存在关系, 称之为 injection.  

而 A 与 B 中, 正好等于 1 , 称之为 bijection.  

### Induction
证明  base , 然后证明若 n , n+1.  

### State Machine

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

如何构建一个 state machine , 最重要的就是, 在大脑里面构建一个不变的条件.这个条件本身,就是 state machine.  

### countable & uncountable

康托尔的想法:  
bij & surj & inj 代表不同的大小.  

A surj B , B surj A <=> A bij B  

一个 set 是否是可数的? 如何定义?   
一个 set 是可数的, 就是说, 给定一个顺序, 我根据其 index 顺利的获取其内容.  
N 就是可数的, 因为 0, 1, 2 , 给定顺序, 就可以得到相应的值. 1 就是 1, 2 就是 2.  
有了可数集合之后, 我们说, 如果一个集合可以和一个可数集合建立 bijiection ,那么这个集合也是可数的.  

比如说, 有理数, 我们很难说他是可数与否. 但是, 我们可以把有理数定义为 m/n , 这样, 就可以和 N x N 建立 bijection . 从而证明有理数也是可数的.  

紧接着, 我们来看看那些是不可数的, 并且证明这个集合不可数.  
譬如说, {0,1}Ω 就是下面的集合  
```
a {0 1 1 1 ... 1 1 0 0 0 1 0 ... }
b {0 0 1 1 ... 1 1 0 0 0 1 0 ... }
c {0 1 0 1 ... 1 1 0 0 0 1 0 ... }
d {0 1 1 1 ... 1 1 0 0 0 1 0 ... }
e {1 1 1 1 ... 1 1 1 1 0 0 0 ... }
. {...}
. {...}
. {...}
```

我们可以做到的是, 从上向下, 从左到右, 每一位, 都取反.(对角线)  
这样, 有了对角线之后, 我们可以说, 这个对角线生成的 binary string 和每一行都不一样. 因为每一样都进行了取反操作.  
所以, 这样, 就不存在一一映射的关系.也就是说, {0,1}Ω 是不可数集合.  

*halting problem*

Noncomputable Sets  

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

## Structure

### Number Theorem 

GCD(最大公约数) theorem gcd(a,b) = n  

同余类 congruence modulo: a = b(mod n)  
(a - b ) mod n  

1. 欧几里得法得 gcd 
2. Prime Factorization
3. 线性组合gcd(a, b) = n 可以写成 xXa + yXb = n. 或者说, n 是 a 与 b 的线性组合.

inverse congruence , 就是说, a = 1(mod n), ka = 1(mod n)  

那么就说, k 是 a 的 inverse . 就是说, k 与 a 互质.  
inverse mod n:  

引出这个话题是通过以下方式:  

    ax = bx(mod n)  
->  8x2 = 3x2(mod 10)__

但是 , 2, 不能被 cancel. 存在问题: 何时能够 cancel 两边的乘数?  
结论是: 2 与 10 互质时. gcd(2, 10) = 1, 而 gcd(2,10) != 1, 所以, 不能被 cancel.  
证明:  

如果需要 ax = bx(mod n) 当中的 x 能够被消除. 实际上是说, 我们需要一个 x 乘以 x' (mod n) 为 1. 这样, 我们两边同时乘以 x'.  
axx' = bxx' (mod n) & xx' = 1 (mod n) => a = b(mod n)  

所以, xx' = 1(mod n) 中的 x' 称之为 inverse x.  
现在, 如何找到 x' ?  
xx' = 1(mod n)  
gcd(x, n) = 1  

Ring Z, 感觉就是另外一个说法来说同余类, 给人的感觉会更加清晰.  
Zn 就代表着与 n 互质的  

欧拉公式
