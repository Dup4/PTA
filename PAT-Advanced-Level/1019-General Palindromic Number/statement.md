
# 1019 General Palindromic Number

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

A number that will be the same when it is written forwards or backwards is known as a **Palindromic Number**. For example, 1234321 is a palindromic number. All single digit numbers are palindromic numbers.

Although palindromic numbers are most often considered in the decimal system, the concept of palindromicity can be applied to the natural numbers in any numeral system. Consider a number $$N > 0$$ in base $$b \ge 2$$, where it is written in standard notation with $$k+1$$ digits $$a_i$$ as $$\sum_{i=0}^k (a_ib^i)$$. Here, as usual, $$0 \le a_i < b$$ for all $$i$$ and $$a_k$$ is non-zero. Then $$N$$ is palindromic if and only if $$a_i = a_{k-i}$$ for all $$i$$. Zero is written 0 in any base and is also palindromic by definition.

Given any positive decimal integer $$N$$ and a base $$b$$, you are supposed to tell if $$N$$ is a palindromic number in base $$b$$.

### Input Specification:

Each input file contains one test case. Each case consists of two positive numbers $$N$$ and $$b$$, where $$0 < N \le 10^9$$ is the decimal number and $$2 \le b \le 10^9$$ is the base. The numbers are separated by a space.

### Output Specification:

For each test case, first print in one line `Yes` if $$N$$ is a palindromic number in base $$b$$, or `No` if not. Then in the next line, print $$N$$ as the number in base $$b$$ in the form "$$a_k$$ $$a_{k-1}$$ ... $$a_0$$". Notice that there must be no extra space at the end of output.

### Sample Input 1:
```plaintext
27 2
```

### Sample Output 1:
```plaintext
Yes
1 1 0 1 1
```

### Sample Input 2:
```plaintext
121 5
```

### Sample Output 2:
```plaintext
No
4 4 1
```

**鸣谢网友“CCPC拿不到牌不改名”修正数据！**

