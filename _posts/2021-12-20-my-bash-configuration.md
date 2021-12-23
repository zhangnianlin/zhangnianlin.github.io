---
title: "[ Read ] 我的 shell 配置 "
subtitle: "「记录」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
---


# 我的 shell 配置清单

- autojump
- fzf (https://github.com/junegunn/fzf)
- emacs (spacemacs, helm )
- tmux (oh my tmux)
- kubectl (kubectx, kube ns, krew)
- kube-ps1 - 在 shell 的 command line 下可以显示当前 k8s 的 ctx + ns. 需要修改 prompt   
- ohmyzsh (plugins: git helm kubectl kube-ps1)
- git/terraform/helm
- [tfk8s](https://github.com/jrhouston/tfk8s)


### spacemacs yaml custom define configuration

```lisp
(defun dotspacemacs/user-config ()
  (use-package yaml-mode
    :ensure t
    :mode (".yaml$")
    :hook
    (yaml-mode . yaml-mode-outline-hook)

    :init
    (defun yaml-outline-level ()
      "return the outline level based on the indentation, hardcoded at 2 spaces."
      (s-count-matches "[ ]\{2]\}" (match-string 0)))
    (defun yaml-mode-outline-hook()
      (outline-minor-mode)
      (setq outline-regexp "^\([ ]\{2\}\)*\([-] \)?\([\"][^\"]*[\"]\|[a-zA-Z0-9_-]*\): *\([>|]\|&[a-zA-Z0-9_-]*\)?$\
")
      (setq outline-level 'yaml-outline-level))
    )
)_
```

### zsh configuration
```shell
set -o vi

# ohmyzsh
ZSH_THEME="af-magic"
plugins=(git kubectl helm kube-ps1)
source $ZSH/oh-my-zsh.sh

# kube-ps1
export PROMPT='$(kube_ps1)'$PROMPT

# fzf
[ -n "$BASH" ] && complete -F _fzf_complete_doge -o default -o bashdefault doge
[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh

# terraform
alias k=kubectl && \
        alias t=terraform && \
        alias tp="terraform plan" && \
        alias ta="terraform apply"

# autojump
[[ -s /home/me/.autojump/etc/profile.d/autojump.sh ]] && source /home/me/.autojump/etc/profile.d/autojump.sh

```
