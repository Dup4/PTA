
# 1156 Sexy Primes

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Sexy primes are pairs of primes of the form ($p$, $p+6$), so-named since "sex" is the Latin word for "six". (Quoted from http://mathworld.wolfram.com/SexyPrimes.html)

Now given an integer, you are supposed to tell if it is a sexy prime.

**Input Specification**

Each input file contains one test case.  Each case gives a positive integer $N$ ($\le 10^8$).

**Output Specification**

For each case, print in a line `Yes` if $N$ is a sexy prime, then print in the next line the other sexy prime paired with $N$ (if the answer is not unique, output the smaller number).  Or if $N$ is not a sexy prime, print `No` instead, then print in the next line the smallest sexy prime which is larger than $N$.

**Sample Input 1**
```plaintext
47
```

**Sample Output 1**
```plaintext
Yes
41
```

**Sample Input 2**
```plaintext
21
```

**Sample Output 2**
```plaintext
No
23
```

