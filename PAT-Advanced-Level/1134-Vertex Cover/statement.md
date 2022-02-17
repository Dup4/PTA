
# 1134 Vertex Cover

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 600 ms
    内存限制: 64 MB

A **vertex cover** of a graph is a set of vertices such that each edge of the graph is incident to at least one vertex of the set. Now given a graph with several vertex sets, you are supposed to tell if each of them is a vertex cover or not.

### Input Specification:

Each input file contains one test case. For each case, the first line gives two positive integers $$N$$ and $$M$$ (both no more than $$10^4$$), being the total numbers of vertices and the edges, respectively. Then $$M$$ lines follow, each describes an edge by giving the indices (from 0 to $$N-1$$) of the two ends of the edge.

After the graph, a positive integer $$K$$ ($$\le$$ 100) is given, which is the number of queries. Then $$K$$ lines of queries follow, each in the format:

$$N_v$$ $$v[1]$$ $$v[2] \cdots v[N_v]$$

where $$N_v$$ is the number of vertices in the set, and $$v[i]$$'s are the indices of the vertices.

### Output Specification:

For each query, print in a line `Yes` if the set is a vertex cover, or `No` if not.

### Sample Input:
```plaintext
10 11
8 7
6 8
4 5
8 4
8 1
1 2
1 4
9 8
9 1
1 0
2 4
5
4 0 3 8 4
6 6 1 7 5 4 9
3 1 8 4
2 2 8
7 9 8 7 6 5 4 2
```

### Sample Output:
```plaintext
No
Yes
Yes
No
No
```


