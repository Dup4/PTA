
# 1030 Beautiful Subsequence

## Statement

!!! info "Metadata"
    作者: 曹鹏
    单位: Google
    代码长度限制: 16 KB
    时间限制: 1000 ms
    内存限制: 64 MB

Given an integer $$m$$, we consider a sequence (with at least 2 elements) as **beautiful** if it contains 2 neighbors with difference no larger than $$m$$. Given an integer sequence with $$n$$ elements, your job is to calculate the number of beautiful subsequences in it. 

### Input Specification:

Each input file contains one test case.  For each case, the first line contains 2 positive integers $$n$$ and $$m$$ ($$2 \le n \le 10^5$$, $$1 \le m \le 10^3$$). Then $$n$$ positive integers follow in the next line, each no larger than $$10^5$$, indicating the sequence.  All the numbers in a line are separated by a space.

### Output Specification:

Output the number of beautiful subsequences of the original sequence. Since the answer might be too large, output the result modulo 1000000007 ($$10^9 + 7$$).

### Sample Input:
```plaintext
4 2
5 3 8 6
```

### Sample Output:
```plaintext
8
```

### Hint:

The beautiful subsequences of the sample input are:

```
(1) Indices {1, 2}, values {5, 3}
(2) Indices {1, 4}, values {5, 6}
(3) Indices {3, 4}, values {8, 6}
(4) Indices {1, 2, 3}, values {5, 3, 8}
(5) Indices {1, 2, 4}, values {5, 3, 6}
(6) Indices {1, 3, 4}, values {5, 8, 6}
(7) Indices {2, 3, 4}, values {3, 8, 6}
(8) Indices {1, 2, 3, 4}, values {5, 3, 8, 6}
```


