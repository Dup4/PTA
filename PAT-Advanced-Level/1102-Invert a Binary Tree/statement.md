
# 1102 Invert a Binary Tree

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

The following is from Max Howell @twitter:
```
Google: 90% of our engineers use the software you wrote (Homebrew), but you can't invert a binary tree on a whiteboard so fuck off.
```
Now it's your turn to prove that YOU CAN invert a binary tree!

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer $N$ ($\le 10$) which is the total number of nodes in the tree -- and hence the nodes are numbered from 0 to $N-1$. Then $N$ lines follow, each corresponds to a node from 0 to $N-1$, and gives the indices of the left and right children of the node. If the child does not exist, a `-` will be put at the position. Any pair of children are separated by a space.

**Output Specification**

For each test case, print in the first line the level-order, and then in the second line the in-order traversal sequences of the inverted tree. There must be exactly one space between any adjacent numbers, and no extra space at the end of the line.

**Sample Input**
```plaintext
8
1 -
- -
0 -
2 7
- -
- -
5 -
4 6
```

**Sample Output**
```plaintext
3 7 2 6 4 0 5 1
6 5 7 4 3 2 0 1
```

