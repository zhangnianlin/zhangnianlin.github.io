---
title: "[ Read ] 计算机网络 - 自上至下方法 "
subtitle: "data plane & control Plane"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
---

# computer networking - top down approach

## network layer

分为两种
- forwarding
- routing 

Best Effort Service Module

网络服务需要保证两个业务目的：
- 单个数据包能够正常的到达目标主机
  - 保证到达
  - 保证到达的时间小于 40 ms
 
- flow of datagrams 能够按序到达目标主机。  
  - 按序抵达
  - 流量控制
  - restrictions on changes in interpacket spacing 

best-effort service 的好处  
simplicity of mechanism has allowed inernete to be widely deployed deployed adopted
1. 简单， 添加 host ，网络等简单
2. network 可以几近支持实时
3. 有很多的应用部署在 Internet Edge
4. congestion control of "elastic" services helps

### forwarding Data Plane

local, per-route function

数据包根据路由表，从一个端口，转发到另外一个端口。 
local functions

high-speed switching fabric
routing processor

1 line termination -> 2 link layer protocol(receive) -> 3 lookup, fowarding, queueing -> 4 switch fabric

3 : Longest prefix matching   
4 : 将入口转发到出口 via memory / via bus / interconnection network   

- 通过memory， 是说数据先放在交换机的内存里面，然后内存再放到出口。
- 通过 bus ，直接将 input port 的内容，直接放到出口的 port 
- interconnection network, 这个 n x n 的一个网络， 然后将数据再一次打散， parallel的传输到 output port 。  



### routing Control Plane

计算一个数据包从源到目的地，怎么走。  
如何计算路由表，是老的方法和 SDN 的主要区别。  

- Per router control plane
- SDN: software-define Networking control plane


queueing

Head-of-the-Line(HOL) blocking  
如果两个数据包需要去一个出口， 第一个数据包抵达后，第二个需要等待第一个处理结束，才能够继续过去。 第二个数据包所在的入口前面的数据包将进行排队。  
入口，以及出口都有可能丢包。 这个时候，就会有drop policy 决定哪些包需要丢弃。    

多个 queue  当中，存在数据，那么，需要一个 scheduler 来决定优先级。  

How much buffering 目前没有合适的选择。  


Buffer Management.  
