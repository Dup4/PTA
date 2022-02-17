
# 1014 Circles of Friends

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 1000 ms
    内存限制: 64 MB

A circle of friends is a network of friend relationships. If A is a friend of B, then B is considered a friend of A no matter B admits or not, and they are said to belong to the same circle. Here we assume that friendship is transitive, that is, if A is a friend of B, and B is a friend of C, then A is a friend of C and the three of them all belong to the same circle.

On the other hand, A is not so close to C as B is. We define the distance D(X, Y) between two friends X and Y as the minimum number of friends between them. For example, D(A, B) = 0, and D(C, A) = 1. The diameter of a friends circle is the maximum distance between any pair of friends in the circle.

Now given some people's relationships, you are supposed to find the number of friends circles and the circle with the largest diameter.

### Input Specification:

Each input file contains one test case. For each case, the first line gives an integer $$N$$ ($$2 \le N \le 1000$$), which is the total number of people involved, and hence they are numbered from 1 to $$N$$. Then $$N$$ lines follow, each in the format:

$$k$$ $$p_1$$ ... $$p_k$$

where $$k$$ ($$0 \le k < min(10, N)$$) is the number of friends and $$p_1$$ to $$p_k$$ (if $$k>0$$) are the friends' indices. The $$i$$-th line corresponds to the $$i$$-th person. All the numbers in a line are separated by spaces. It is guaranteed that no one is given as a friend of oneself.

### Output Specification:

For each case, print in a line the number of friends circles, and the largest diameter, separated by exactly one space.

### Sample Input:
```plaintext
17
2 15 12
1 17
2 16 9
1 8
4 10 13 15 14
0
2 11 14
1 4
2 2 3
2 13 11
2 15 7
2 1 14
2 5 15
0
0
1 3
1 2
```

### Sample Output:
```plaintext
4 3
```



