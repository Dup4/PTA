
# 1013 Image Segmentation

## Statement

!!! info "Metadata"
    - 作者: ZHU, Jianke
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

Image segmentation is usually formulated as a graph partition problem, where each segment corresponds to a connected component. Moreover, each pixel is the vertex of the graph. Each edge has a weight, which is a non-negative dissimilarity between neighboring pixels. So, the goal of image segmentation is to decompose the image graph into several disconnected components, where the elements in a component are similar and the elements in the different components are dissimilar.

The components are defined as follows: 

- A component is made of a set of connected vertices;
- Any two components have no shared vertices;
- The dissimilarity $D(C1, C2)$ of any two components $C1$ and $C2$ is larger than the confidence $H$ of any of $C1$ and $C2$. 
- The dissimilarity $D(C1, C2)$ is defined to be the minimum edge weight of all the edges connecting $C1$ and $C2$, or infinity if no such edge exists;
- The confidence of a component $C$, $H(C)$, is defined to be the maximum edge weight of the minimum spanning tree of $C$, plus a function $f(C) = c/|C|$ where $c$ is a positive constant and $|C|$ is the size of the component $C$;
- A set of vertices must not be treated as a component if they can be partitioned into two or more components.


Your job is to write a program to list all the components.

**Input Specification**

Each input file contains one test case.  For each case, the first line contains three integers: $N_v$ ($0 < N_v \le 1000$), the total number of vertices (and hence the vertices are numbered from 0 to $N_v -1$); $N_e$, the total number of edges; and $c$, the constant in the function $f(C)$.  Then $N_e$ lines follow, each gives an adge in the format:

```
V1 V2 Weight
```

Note: it is guaranteed that each pixel has no more than 8 neighboring pixels.  The constant and all the weights are positive and are no more than 1000.

**Output Specification**

For each case, list each component in a line.  The vertices in a component must be printed in increasing order, separated by one space with no extra space at the beginning or the end of the line.  The components must be listed in increasing order of their first vertex.

**Sample Input 1**
```plaintext
10 21 100
0 1 10
0 3 60
0 4 90
1 2 90
1 3 50
1 4 200
1 5 86
2 4 95
2 5 5
3 4 95
3 6 15
3 7 101
4 5 500
4 6 100
4 7 101
4 8 101
5 7 300
5 8 50
6 7 90
7 8 84
7 9 34
```

**Sample Output 1**
```plaintext
0 1 3 6
2 5 8
4
7 9
```

**Sample Input 2**
```plaintext
7 7 100
0 1 10
1 2 61
2 3 50
3 4 200
4 5 82
5 0 200
3 6 90
```

**Sample Output 2**
```plaintext
0 1
2 3 6
4 5
```

