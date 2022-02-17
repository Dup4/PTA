
# 1024 Currency Exchange Centers

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 250 ms
    内存限制: 64 MB

There are currently 168 internationally recognized unique national currencies in this world.  But let us assume that we have business with other species in the  entire universe...  To change one currency to another, we need currency exchange centers, and they charge fees for it.  Now given a list of informations of these centers, you are supposed to find a collection of the centers so that we can make change between any two currencies (directly or indirectly) through them.  Since such a kind of collection may not be unique, you must find the one with the minimum total fees; and if there are still more than one solution, find the one with the minimum number of centers -- it is guaranteed that such a solution is unique.

### Input Specification:

Each input file contains one test case. For each case, the first line gives two positive integers $$N$$ and $$M$$ (both no more than $$10^4$$), being the total numbers of currencies and the size of the list of currency exchange center informations, respectively. Then $$M$$ lines follow, each describes a piece of information in the following format:

```
C1 C2 Center Fee
```
where `C1` and `C2` are the indices (from 0 to $$N-1$$) of the two currencies; `Center` is a string of 3 capital English letters representing the name of a center; and `Fee` is a positive integer no more than $$10^4$$.  It is guaranteed that at most one exchange center is given for each pair of different currencies.

### Output Specification:

Print in the first line the total number of currency exchange centered being collected, and the total amount of fees they charge, separated by a space.  Then in the following lines, print the centers which must be collected in the same format as the input.  The centers must be output in alphabetical order of their names, and if there is a tie, in ascending order of their fees.  It is guaranteed that such a solution exists and is unique.

### Sample Input:
```plaintext
6 9
4 3 CBC 32
1 5 HSB 43
1 0 HSB 32
0 2 CTB 28
4 2 CBC 19
2 3 CBC 28
0 4 ABC 28
1 2 ABC 32
3 1 CTB 19
```

### Sample Output:
```plaintext
3 137
4 2 CBC 19
2 3 CBC 28
3 1 CTB 19
0 2 CTB 28
1 5 HSB 43
```


