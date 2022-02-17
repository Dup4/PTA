
# 1015 Reversible Primes

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

A **reversible prime** in any number system is a prime whose "reverse" in that number system is also a prime. For example in the decimal system 73 is a reversible prime because its reverse 37 is also a prime.

Now given any two positive integers $$N$$ ($$< 10^5$$) and $$D$$ ($$1 < D \le 10$$), you are supposed to tell if $$N$$ is a reversible prime with radix $$D$$.

### Input Specification:

The input file consists of several test cases. Each case occupies a line which contains two integers $$N$$ and $$D$$. The input is finished by a negative $$N$$.

### Output Specification:

For each test case, print in one line `Yes` if $$N$$ is a reversible prime with radix $$D$$, or `No` if not.

### Sample Input:
```plaintext
73 10
23 2
23 10
-2
```

### Sample Output:
```plaintext
Yes
Yes
No
```


