
# 1011 Cut Rectangles

## Statement

!!! info "Metadata"
    - 作者: LIU, Rujia
    - 单位: 北京尔宜居科技有限责任公司
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

When a rectangle is cut by a straight line, we can easily obtain two polygons as the result. But the reversed problem is harder: given two polygons, your task is to check whether or not they could be obtained by cutting a rectangle.

To give you more trouble, the input polygons are possibly moved, rotated (90 degrees, 180 degrees, or 270 degrees counter-clockwise), or even flipped (mirrored).

It is assumed that the original rectangle's edges are parallel to the axis.

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer $N$ ($\le 20$), and then $N$ pairs of polygons are given. Each polygon is described in the format:

$k$ $x_1$ $y_1$ $\cdots$ $x_k$ $y_k$

where $k$ ($2 < k \le 10$) is the number of vertices on the polygon, and ($x_i$, $y_i$) ($0 \le x_i, y_i \le 10^8$) are the coordinates of the vertices, given in either clockwise or counter-clockwise order.

Note: there is no redundant vertex. That is, it is guaranteed that all the vertices are distinct for each polygon, and that no three consecutive vertices are on the same line.

**Output Specification**

For each pair of polygons, print in a line either `YES` or `NO` as the answer.

**Sample Input**
```plaintext
8
3 0 0 1 0 1 1
3 0 0 1 1 0 1
3 0 0 1 0 1 1
3 0 0 1 1 0 2
4 0 4 1 4 1 0 0 0
4 4 0 4 1 0 1 0 0
3 0 0 1 1 0 1
4 2 3 1 4 1 7 2 7
5 10 10 10 12 12 12 14 11 14 10
3 28 35 29 35 29 37
3 7 9 8 11 8 9
5 87 26 92 26 92 23 90 22 87 22
5 0 0 2 0 1 1 1 2 0 2
4 0 0 1 1 2 1 2 0
4 0 0 0 1 1 1 2 0
4 0 0 0 1 1 1 2 0
```

**Sample Output**
```plaintext
YES
NO
YES
YES
YES
YES
NO
YES
```

