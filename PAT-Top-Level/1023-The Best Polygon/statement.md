
# 1023 The Best Polygon

## Statement

!!! info "Metadata"
    - 作者: CHEN, Xiang
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 1500 ms
    - 内存限制: 64 MB

An $n$-gon is a polygon with $n$ sides. For example, a triangle is a 3-gon. Now you are asked to find the best $n$-gon in a given convex $N$-gon. The vertices of the $n$-gon are selected from vertices of the $N$-gon. The $n$-gon you are supposed to find must have the largest area among all possible $n$-gons, which means that it approximates the $N$-gon the best. The figure below shows the best 6-gon (the shaded part) in a 10-gon.

![6gon.JPG](./statement-assets/dec24f4d-d76f-4a11-9ae7-d4b9f2628939.JPG)

**Input Specification**

Each input file contains one test case. For each case, the first line gives two positive integers $N$ ( $6 \le N \le 300$ ) which is the total number of vertices of the convex $N$-gon, and $n$ ( $6 \le n \le min(10, N)$ ) which is the total number of vertices of the approximating convex $n$-gon. Then $N$ lines follow, the $i$-th line gives the 2-D coordinates ($x$, $y$) of the $i$-th vertex ( $i = 0, \cdots , N-1$ ). The $x$ and $y$ coordinates in a line are real numbers with their absolute values no more than 1000, and they are separated by a space.

**Output Specification**

Print in a line all the vertex indices of the best $n$-gon in descending order. All the numbers are separated by a space and there must be no extra space at the beginning or the end of the line. It is guaranteed that the solution is unique.

**Sample Input**
```plaintext
10 6
133.0 1.0
544.0 71.0
558.0 206.0
536.0 338.0
463.0 436.0
330.0 503.0
188.0 499.0
305.0 2.0
55.0 410.0
2.0 140.0
```

**Sample Output**
```plaintext
9 8 5 3 1 0
```

