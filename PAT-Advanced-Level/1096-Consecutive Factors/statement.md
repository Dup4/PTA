
# 1096 Consecutive Factors

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Among all the factors of a positive integer N, there may exist several consecutive numbers.  For example, 630 can be factored as 3$$\times$$5$$\times$$6$$\times$$7, where 5, 6, and 7 are the three consecutive numbers.  Now given any positive N, you are supposed to find the maximum number of consecutive factors, and list the smallest sequence of the consecutive factors.

### Input Specification:

Each input file contains one test case, which gives the integer N (1$$<$$N$$<2^{31}$$).

### Output Specification:

For each test case, print in the first line the maximum number of consecutive factors.  Then in the second line, print the smallest sequence of the consecutive factors in the format `factor[1]*factor[2]*...*factor[k]`, where the factors are listed in increasing order, and 1 is NOT included.

### Sample Input:
```plaintext
630
```

### Sample Output:
```plaintext
3
5*6*7
```

