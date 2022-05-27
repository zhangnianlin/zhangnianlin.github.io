```yaml
title: "RSA 加密的基础"
subtitle: "「笔记」"
layout: post
author: "NagleZh"
header-style: text
lang: zh
tags:
  - 笔记
```

# GCD

GCD(A,B) A = qB + r

need proof: if A & B have same GCD, iff B & r have same GCD. 
so what we need proof is GCD(A, B) <=> GCD(B,r)

> r = A - qB 
> let's say d|A , d|B
>  A = dx, B = dy 
> r = dx - q.dy = d(x-qy) => d|d(x-qy)
>  so , if d|A & d|B , then d|r.

> let's say z|B & z|r
>  A = q*B + r
>  B = z*x , r = z*y
>  A = q*z*x + z*y = z(q*x + y) <=> z|z(a*x + y)

# Congruences

definition:

```
a = b(mod n) if and only if:  n | (a-b)
```

eg. 
30 = 12 (mod 9)

1. `rem(30, 9) = 3 = rem(12, 9)`
2. `30 = 2*9 + 12`
3. `9 | ( 30 - 12 )`
4. `12(mod 9) = 3`

gcd(30, 12) = 2*12 + 6
gcd(12, 6) = 2*6

proof:

1. rem(a, b) = rem(b, n)

2. what do we have?  a = b(mod n) => n|(a-b) 

3. say a = x.n + r1 , b = y.n + r2

4. n|(x.n + r1 - y.n - r2)

5. n | n(x-y) +(r1-r2)

6. because r1 & r2 are reminders, so r1 - r2 < n

7. so, r1 == r2 is true.

Practice:

for now on, we have a problem need to be resolved: 
now , we know k, b. how to calculate a?
a, k is a num between 0 - 26
rem(a.k, 26)
a.k(mod 26) = r
26|(r - a.k) = 0

Application:

An application using a function to encrypt message. every single character is between a-z & A-Z, and it's using methed like below:

take the index of single character A, and using a random num k(0< k <= 26)

rem((k * indexof(A)) ,26) = r

now , we do know what r , k is. how to decrypt the message? 

encrypt function (presudo):

```go
func encrypt(A string, k int) {
    num := (indexof(A) - 65 * k) % 26 + 65
    return char(num)
}
func decrypt(A string, k int) {
    for (int i=0; i<=26; i++) {
        num := ((indexof(A) - 65) - i * k) % 26
        if (num == 0) {
            return char(i + 65)
        } 
    }
    return "NULL"
}
```




