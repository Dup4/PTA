
# 1017 The Best Peak Shape

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 2000 ms
    内存限制: 64 MB

In many research areas, one important target of analyzing data is to find the best "peak shape" out of a huge amount of raw data full of noises. A "peak shape" of length $$L$$ is an ordered sequence of $$L$$ numbers { $$D_1$$, $$\cdots$$, $$D_L$$ } satisfying that there exists an index $$i$$ ($$1 < i < L$$) such that $$D_1 < \cdots < D_{i-1} < D_i > D_{i+1} > \cdots > D_L$$.

Now given $$N$$ input numbers ordered by their indices, you may remove some of them to keep the rest of the numbers in a peak shape. The best peak shape is the longest sub-sequence that forms a peak shape. If there is a tie, then the most symmetric (meaning that the difference of the lengths of the increasing and the decreasing sub-sequences is minimized) one will be chosen.

### Input Specification:

Each input file contains one test case. For each case, the first line gives an integer $$N$$ ($$3 \le N \le 10^4$$). Then $$N$$ integers are given in the next line, separated by spaces. All the integers are in $$[-10000, 10000]$$.

### Output Specification:

For each case, print in a line the length of the best peak shape, the index (starts from 1) and the value of the peak number. If the solution does not exist, simply print "No peak shape" in a line. The judge's input guarantees the uniqueness of the output.

### Sample Input1:
```plaintext
20
1 3 0 8 5 -2 29 20 20 4 10 4 7 25 18 6 17 16 2 -1
```

### Sample Output1:
```plaintext
10 14 25
```

### Sample Input2:
```
5
-1 3 8 10 20
```

### Sample Output2:
```
No peak shape
```

