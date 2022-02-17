
# 1127 ZigZagging on a Tree

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Suppose that all the keys in a binary tree are distinct positive integers.  A unique binary tree can be determined by a given pair of postorder and inorder traversal sequences.  And it is a simple standard routine to print the numbers in level-order.  However, if you think the problem is too simple, then you are too naive.  This time you are supposed to print the numbers in "zigzagging order" -- that is, starting from the root, print the numbers level-by-level, alternating between left to right and right to left.  For example, for the following tree you must output: 1 11 5 8 17 12 20 15.

![zigzag.jpg](~/337cbfb0-a7b2-4500-9664-318e9ffc870e.jpg)

### Input Specification:

Each input file contains one test case.  For each case, the first line gives a positive integer N ($$\le$$30), the total number of nodes in the binary tree.  The second line gives the inorder sequence and the third line gives the postorder sequence.  All the numbers in a line are separated by a space.

### Output Specification:

For each test case, print the zigzagging sequence of the tree in a line.  All the numbers in a line must be separated by exactly one space, and there must be no extra space at the end of the line.

### Sample Input:
```plaintext
8
12 11 20 17 1 15 8 5
12 20 17 11 15 8 5 1
```

### Sample Output:
```plaintext
1 11 5 8 17 12 20 15
```


