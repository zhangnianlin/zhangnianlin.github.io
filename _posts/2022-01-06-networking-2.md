---
title: "[ Read ] 计算机网络 - 自上至下方法 2"
subtitle: "「笔记」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
  - network
---


# routing 

路由器, isp 会进行 queueing  
这个 queueing 会进行判断.  
fcfs , 根据端口判断.  

scheduling polices: 
- round robin
- weighted fair queueing, 每一次没有被选中, 就会增加 weight 

network neutrality rules:
- no blocking
- no throttling 
- no paid prioritization 

routing table 被几个东西确定:
(path selection algorithms)
- routing protocol (OSPF/BGP)
- sdn controller

ip protocol:
- datagram format (layer 层的 format )
- addressing (地址的format )
- packet handling conventions(如何拆包等)

icmp protocol:
- error reporting
- router 'signaling'
