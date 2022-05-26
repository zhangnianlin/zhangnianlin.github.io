---
title: "制作 dashboard 的一些经验"
subtitle: "「笔记」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
---

# monitoring dashboard  的一些经验

总体来讲, dashboard 是给人看的, 所以最好结果简单,清晰.我准备吧 dashboard making 经验分为三点进行解析.

1. output: 人们只需要看一眼, 就知道, 正常/不正常. 所以, 一个 monitoring dashboard 需要有一个清晰的 output.
2. input: dashboard 同样的需要交互, 所以 input 也很重要.
3. 观测角度: dashboard 的消费者是谁, 决定了 input & output.

## 观测角度

观测角度, 老板的总结分析, RCA 看板.
如果消费者是老板, dashboard 的业务角度上来讲, 就更强调数字, sla 是多少? 事故的数量是多少? 那一个 app 出问题最多需要进行整改, 等等.
消费者是 developer, 那么强调的 output 就是整个 application 的状态, 追溯到上一个 application 的 dependency.
消费者如果是 SRE, 那么强调的是整个系统的状态, 错误的变化情况.

综合来讲, 这些数字并不是说很孤立的, dev 可能会想看错误的变化情况, sre 可能也想看 application dependency.  
但是, 逻辑上将两个分开, 会帮助 dev & ops 的 dashboard making 更加清晰.从而可以有迹可循.  

## 总结 Input

1. 总结尽量不需要 input

## 总结 Output
1. sla
2. errors

## Dev Input

filters: tenant -> org -> application -> path -> status

## Dev Output

exception

## Ops Input
tenant -> org -> application -> path -> status

## Ops Output
http error

