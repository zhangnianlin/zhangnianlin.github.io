---
title: "[ Learn ] 清华大学 ucore os labs"
subtitle: "online mooc"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
  - OS
---

# Ucore Development

构建顺序: 
- Bootloader
- Interpret
- Physical Memory management
- virtual Memory management / swaping / disk management
- Process
- Scheduling
- Sync / Async
- File System

在 x86 的世界里, 内核就像是在一个地区建立一个工厂.  
生产车间是 CPU, 内存是仓库.  
仓库一般在这个地方的起始位置, 在 x86 的世界里. 在0x7c00 这个位置.   

首先需要确定一个事情,就是仓库建立的时候, 你需要了解仓库里面, 哪个地方用来放机器的零件(code), 那些用来放产品结果(data).  
这两个东西不能混到一起, 所以需要一个表格来告诉操作的人分别在什么位置. 这个表格就是 gdt.  

## questions

在初始化的时候, 会将 cs , es, ss, ds 等等寄存器初始化, 根据这个内容, 获取到 gdt 里面的内容. 进而



## lab2

get_pte()

1. 什么时候启动了虚拟地址与物理地址的转换？ 
2.


## next step

xv6 system from MIT
