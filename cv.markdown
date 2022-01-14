---
layout: page
title: CV
permalink: /cv/
---

## Personal Information
* * *

**Github**: https://www.github.com/NagleZhang
**Site**: https://nagle.top
**Email**: nagle.zhang@qq.com

## Quick Overview
* * *

3 years of IT management experience, and Profile Skilled DevOps Engineer with 6+ years experience. passionate with problem solving. Strong experienced with elastic stack and monitoring ecosystem. maintainer of 500+ instances on bare metal in IDC. Maintained multiple region(AWS JP/CN) Saas platform. IaC beleiver, Lifelong learner.

## WORK Experience
* * *
### Company Timeline View

* * *
#### SAP (Kubernetes , Devops Engnieer) 2019.12 - Current

Keyword: Open Source, Software Engineering, Low Level Coding

  - Using open source code to implement CI/CD pipeline on jenkins.
  - Implement platform base on kubernetes.
  - Apply Infrastructure as Code for team by using terraform and helm.
  - next step: want to apply eBPF to system, enhance system transprancy.

#### Seedlink (Public Cloud, Devops Engineer) 2019.06 - 2019.12

Kyeword: Learn from Failure, Consolidate

  - Dockerlize all the service, design Docker Arch.
  - Refactoring CI/CD workflow by using Jenkins.(follow ![moby](https://github.com/moby/moby/blob/master/Jenkinsfile) workflow)
  - Almost refactoring all the ansible code for provision and deploy.
  - Apply terraform in team.
  - Integrated Jenkins with Teams by groovy.

#### Strikingly (Public Cloud, Devops Engineer) 2018.03 - 2019.06

Keyword: Public Cloud, Infrastructure As Code, A Bigger Wrold

  - maintain fully automated CI/CD pipelines for code deployment using gitlab-ci. 
  - Maintain infrastructure on AWS by terraform.  
  - Automated instance provision by shell and ansible. 
  - Develop lambda on AWS for cronjobs by python/golang. 
  - Setup monitoring system. Use prometheus, grafana and elasticsearch. 
  - Mantain game k8s production on tencent Cloud. 
  - Setup data pipeline,which scrap data from eos to elasticsearch by using python and AWS lambda. 
   
#### eHi Car Rental Service(Private Cloud, DevOps Enginner) 2015.07 - 2018.03 

Keyword: Private Cloud, Manually Operation, Scripting, Analsis

  - Setup Elastic stack(Elasticsearch+Logstash+Kibana) for log analysis. 
  - Automated extract daily data from elasticsearch by using python. 
  - Using ElasticAlert to monitoring production log.  
  - Maintain Zabbix/Cacti/Piwik system for problem analysis. 
  - Translate Elastlaert document from English to Chinese. 
  - Reduce problem detecting and solving time from 1 hour to 5 minutes by using alert and log. 
    
#### Power Dekor Floor factory ( IT Help Desk Support, Manager)  2012.02 - 2015.06 

Keyword: Cooperate, Comminunication

  - Build network for office which support 100+ clients. 
  - Troubleshoting with network traffics. 
  - Manage IT depatment, wrote weekly report. 
  - Wrote powerpoint report for CEO. 

### Project View

***
#### 2021.6 - 2022.1 Kubernetes application management code.
  - openstack
  - terraform 
  - hashcorp vault & external secrets 
  - gardener
  - helm
  - argocd
  - loki
  - kong ingress

support developer onboarding their project by pull request on github. and hashicorp manage sensitive date , and synced by external-secrets. 
kong ingress is incharge of authentication & authrozation(oidc). 
monitoring using loki & grafana, some are using efk. 

#### 2019.12 - 2021.6 CI/CD System Enhancement

Jenkins Shared Library for Monitoring Jenkins pipeline execution time

  - jenkins shared library(groovy)
  - grafana 
  - influxdb

A unified CI/CD system writen by jenkins pipeline & groovy , most part are groovy.   
using groovy to do data extraction , put it on influxdb. and analysis on grafana.   

#### 2018.3 - 2019.12 Infrastructure Management System

  - AWS vpc/peering/ec2/s3/dynamodb/auto-scaling/security group/ami and so on
  - Elasticsearch
  - Docker
  - AWS lambda 
  - Terraform
  - Ansible
  - Jenkins

Using ansible to do system provisioning on ec2 by using cloud init.   
terraform build vpc, nat gateway, security group, auto scaling group.  
provisioning system by using ansible. the ansible include three step: [bootstap, provisioning app environment, deploy app]  
bootstap include setup default environment.   
provision app environment it's about setup application spefic package, and environment.  
deploy application, is to run container on ec2, and this part can be reused by CD system.  
Using jenkins to do CI/CD.  

#### 2015.7 - 2018.3 Monitoring System

  - Elasticsearch, Kibana , Logstash
  - Elastalert
  - Cerebro

Pain point: The system got 500 more instances, both include windows & linux.  
What we have done: we need a good tool to extract logs from each and to do analysis instead of pull logs from instance directly and analysis by labtop.  
Using Elasticsearch & Kibana (version 3), nxlog is try to extrat the log from windows server , and push to logstash. we defined the rule of log format on logstash. then push it directly to elasticsearch.  
For es management part, we are using cerebro. to track if the es stauts is red or not. and how replicas works.  
For alerting part, we are using elastalert. it's just using yaml to send alert to lot of channels. include wechat.    
 
## Skills 
* * *
  - Terraform for infrastructure manage. 
  - Configuration and automated by ansible. 
  - Kubernetes application management.
  - Git for version control 
  - Jenkins & Argocd for integration and deploy.
  - Golang/Python/Groovy development. 
  - Strong experience with public cloud. (AWS/Ali cloud/Tencent Cloud). 
  - Docker & kubernetes. 
  - Windows Server / Linux Server Mangement. 
  - Elastic stack / prometheus / Zabbix / Cacti 
  - Language: English/中文 
	  
## Education 
* * *
  2012  Computer application and technology 2009 - 2012 
