---
title: "[Review] 如何手动注册自己的 HTTPS 证书以及通讯过程"
subtitle: "「笔记」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
  - 基础
  - HTTPS
  - Security
---

# HTTPS 是什么？
secure http， 在 http 的通讯基础上，添加上 ssl 加密。

# 通讯的具体过程
1. 客户端发送 http 请求给到服务端.
2. 

# 这些证书在实际过程当中的角色
许多云服务在提供https 服务给到 load balancer 时候，经常会需要添加证书，其经常分为以下几个部分:

1. private key.pem
2. cert.pem
3. certificate chain

以上三个内容, 均是为通讯过程服务。


# 如何注册一个自己的 HTTPS 证书
使用 openssl
