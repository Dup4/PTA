
# 1167 Cartesian Tree

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

A **Cartesian tree** is a binary tree constructed from a sequence of distinct numbers.  The tree is heap-ordered, and an inorder traversal returns the original sequence.  For example, given the sequence { 8, 15, 3, 4, 1, 5, 12, 10, 18, 6 }, the min-heap Cartesian tree is shown by the figure.


![CTree.jpg](~/6a99f68a-6578-46e0-9232-fbf0adf3691f.jpg)


Your job is to output the level-order traversal sequence of the min-heap Cartesian tree.

### Input Specification:

Each input file contains one test case.  Each case starts from giving a positive integer $$N$$ ($$\le 30$$), and then $$N$$ distinct numbers in the next line, separated by a space.  All the numbers are in the range of **int**.

### Output Specification:

For each test case, print in a line the level-order traversal sequence of the min-heap Cartesian tree.  All the numbers in a line must be separated by exactly one space, and there must be no extra space at the beginning or the end of the line.

### Sample Input:
```plaintext
10
8 15 3 4 1 5 12 10 18 6
```

### Sample Output:
```plaintext
1 3 5 8 4 6 15 10 12 18
```


