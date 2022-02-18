
# 1115 Counting Nodes in a BST

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

A Binary Search Tree (BST) is recursively defined as a binary tree which has the following properties:

- The left subtree of a node contains only nodes with keys less than or equal to the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- Both the left and right subtrees must also be binary search trees.

Insert a sequence of numbers into an initially empty binary search tree. Then you are supposed to count the total number of nodes in the lowest 2 levels of the resulting tree.

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer $N$ ($\le 1000$) which is the size of the input sequence. Then given in the next line are the $N$ integers in $[-1000, 1000]$ which are supposed to be inserted into an initially empty binary search tree.

**Output Specification**

For each case, print in one line the numbers of nodes in the lowest 2 levels of the resulting tree in the format:
```
n1 + n2 = n
```
where `n1` is the number of nodes in the lowest level, `n2` is that of the level above, and `n` is the sum.

**Sample Input**
```plaintext
9
25 30 42 16 20 20 35 -5 28
```

**Sample Output**
```plaintext
2 + 4 = 6
```

