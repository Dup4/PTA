
# 1107 Social Clusters

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 1200 ms
    内存限制: 64 MB

When register on a social network, you are always asked to specify your hobbies in order to find some potential friends with the same hobbies. A **social cluster** is a set of people who have some of their hobbies in common. You are supposed to find all the clusters.

### Input Specification:

Each input file contains one test case. For each test case, the first line contains a positive integer $$N$$ ($$\le 1000$$), the total number of people in a social network. Hence the people are numbered from 1 to $$N$$. Then $$N$$ lines follow, each gives the hobby list of a person in the format:

$$K_i$$: $$h_i$$[1] $$h_i$$[2] ... $$h_i$$[$$K_i$$]

where $$K_i$$ ($$>0$$) is the number of hobbies, and $$h_i[j]$$ is the index of the $$j$$-th hobby, which is an integer in [1, 1000].

### Output Specification:

For each case, print in one line the total number of clusters in the network. Then in the second line, print the numbers of people in the clusters in non-increasing order. The numbers must be separated by exactly one space, and there must be no extra space at the end of the line.

### Sample Input:
```plaintext
8
3: 2 7 10
1: 4
2: 5 3
1: 4
1: 3
1: 4
4: 6 8 1 5
1: 4
```

### Sample Output:
```plaintext
3
4 3 1
```


