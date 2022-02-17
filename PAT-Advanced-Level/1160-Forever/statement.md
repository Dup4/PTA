
# 1160 Forever

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 3000 ms
    内存限制: 64 MB

"Forever number" is a positive integer $$A$$ with $$K$$ digits, satisfying the following constrains:

- the sum of all the digits of $$A$$ is $$m$$;
- the sum of all the digits of $$A+1$$ is $$n$$; and
- the greatest common divisor of $$m$$ and $$n$$ is a prime number which is greater than 2.

Now you are supposed to find these forever numbers.

### Input Specification:

Each input file contains one test case. For each test case, the first line contains a positive integer $$N$$ ($$\le 5$$).  Then $$N$$ lines follow, each gives a pair of $$K$$ ($$3<K<10$$) and $$m$$ ($$1<m<90$$), of which the meanings are given in the problem description.

### Output Specification:

For each pair of $$K$$ and $$m$$, first print in a line `Case X`, where `X` is the case index (starts from 1).  Then print $$n$$ and $$A$$ in the following line.  The numbers must be separated by a space.  If the solution is not unique, output in the ascending order of $$n$$.  If still not unique, output in the ascending order of $$A$$.  If there is no solution, output `No Solution`.

### Sample Input:
```plaintext
2
6 45
7 80
```

### Sample Output:
```plaintext
Case 1
10 189999
10 279999
10 369999
10 459999
10 549999
10 639999
10 729999
10 819999
10 909999
Case 2
No Solution
```


