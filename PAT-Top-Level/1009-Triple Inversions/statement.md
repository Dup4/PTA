
# 1009 Triple Inversions

## Statement

!!! info "Metadata"
    作者: CAO, Peng
    单位: Google
    代码长度限制: 16 KB
    时间限制: 300 ms
    内存限制: 64 MB

Given a list of $$N$$ integers $$A_1$$, $$A_2$$, $$A_3$$,...$$A_N$$, there's a famous problem to count the number of inversions in it. An inversion is defined as a piar of indices $$i < j$$ such that $$A_i > A_j$$.

Now we have a new challenging problem. You are supposed to count the number of triple inversions in it. As you may guess, a triple inversion is defined as a triple of indices $$i < j < k$$ such that $$A_i > A_j > A_k$$. For example, in the list { 5, 1, 4, 3, 2 } there are 4 triple inversions, namely (5,4,3), (5,4,2), (5,3,2) and (4,3,2). To simplify the problem, the list $$A$$ is given as a permutation of integers from 1 to $$N$$.

### Input Specification:

Each input file contains one test case. For each case, the first line gives a positive integer $$N$$ in [$$3, 10^5$$]. The second line contains a permutation of integers from 1 to $$N$$ and each of the integer is separated by a single space.

### Output Specification:

For each case, print in a line the number of triple inversions in the list.

### Sample Input:
```plaintext
22
1 2 3 4 5 16 6 7 8 9 10 19 11 12 14 15 17 18 21 22 20 13
```

### Sample Output:
```plaintext
8
```


