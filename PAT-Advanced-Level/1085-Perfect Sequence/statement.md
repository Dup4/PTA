
# 1085 Perfect Sequence

## Statement

!!! info "Metadata"
    作者: CAO, Peng
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 200 ms
    内存限制: 64 MB

Given a sequence of positive integers and another positive integer $$p$$.  The sequence is said to be a **perfect sequence** if $$M \le m \times p$$ where $$M$$ and $$m$$ are the maximum and minimum numbers in the sequence, respectively.

Now given a sequence and a parameter $$p$$, you are supposed to find from the sequence as many numbers as possible to form a perfect subsequence.

### Input Specification:

Each input file contains one test case.  For each case, the first line contains two positive integers $$N$$ and $$p$$, where $$N$$ ($$\le 10^5$$) is the number of integers in the sequence, and $$p$$ ($$\le 10^9$$) is the parameter.  In the second line there are $$N$$ positive integers, each is no greater than $$10^9$$.

### Output Specification:

For each test case, print in one line the maximum number of integers that can be chosen to form a perfect subsequence.

### Sample Input:
```plaintext
10 8
2 3 20 4 5 1 6 7 8 9
```

### Sample Output:
```plaintext
8
```


