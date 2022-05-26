---
title: "RSA 加密的基础"
subtitle: "「笔记」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
---

# GCD

GCD(A,B) A = qB + r

need proof: if A & B have same GCD, iff B & r have same GCD. 
so what we need proof is GCD(A, B) <=> GCD(B,r) 

>   r = A - qB 
>    let's say d|A , d|B
>    A = dx, B = dy 
>    r = dx - q.dy = d(x-qy) => d|d(x-qy)
>    so , if d|A & d|B , then d|r. 

> let's say z|B & z|r
>  A = q*B + r
>  B = z*x , r = z*y
>  A = q*z*x + z*y = z(q*x + y) <=> z|z(a*x + y)



