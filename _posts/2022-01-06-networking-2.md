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


# data plane routing 

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


dhcp server 
1. brodecast to subnet: src: 0.0.0.0, 68; dest: 255.255.255.255, 67; yiaaddr: your request ip address

### nat
nat translation table. from WAN to LAN  
这个地方理解了一个点: 如果我作为一个客户端, 除非我做了nat, 从 LAN 到 WAN, 否则, 我的 src 会经过各个路由器不会发生改变, 直到抵达 dest.  
nat 的转换关键在于, dest + port 可以在 nat table 当中进行一一映射.  
src -> dest 过程当中, 数据包当中的 src 会被修改为 nat 网关.并添加上端口.并添加到 nat 网关当中 route table 当中.  
dest -> src 的过程当中, 根据之前记录的 nat translate table, 再映射回去.  


### ipv6  
效率会更高, 但是整个数据包少了一些字段.  
- checksum 
- fragmentation/reassembly
- options

如何 migration ?  
Tunneling:  
ipv4 的 payload 当中可以存在 ipv6 的数据包  

当一些 ipv6 网络需要跨越 ipv4 传递到另外一个 ipv6 时, 可以跨过中间的 ipv4 , 把 ip v6 的信息传送到 另外一个 ip v6.  

## generialized forwarding
> compare to destination forwarding
match + action   
match 比之前囊括了更多, 比如说在第三层第二层工作.  link/network/transport layer
action, 也扩展了, 不局限于 forwarding, 并且包含 drop, modify 等操作.  
所以数据结构上面, 叫做 flow table.   
然后,第一列,叫做 match, 另外一列, 叫做 action  

这样, generialized forward , 就可以支持多项功能.  
比如说, 可以作为 switch / router / firewall / nat gateway  
openflow  

middleboxes

RFC 对于个人来说有何用处? 我们在日常工作当中, 有哪些是需要用到 RFC 的?  


# control plane
如何生成路由表.
stay tuned  
how to determine path from source to destination  

routing algorithms
- link state 
- distance vector

Per-router control plane:
- intra-ISP routing: OSPF
- routing among ISPs: BGP

SDN control plane

Internet Control Message Protocol

Network management , configuration
- snmp
- netconf/yang
