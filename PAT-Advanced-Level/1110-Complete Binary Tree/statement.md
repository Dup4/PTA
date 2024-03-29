
# 1110 Complete Binary Tree

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Given a tree, you are supposed to tell if it is a complete binary tree.

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer $N$ ($\le 20$) which is the total number of nodes in the tree -- and hence the nodes are numbered from 0 to $N-1$. Then $N$ lines follow, each corresponds to a node, and gives the indices of the left and right children of the node. If the child does not exist, a `-` will be put at the position. Any pair of children are separated by a space.

**Output Specification**

For each case, print in one line `YES` and the index of the last node if the tree is a complete binary tree, or `NO` and the index of the root if not. There must be exactly one space separating the word and the number.

**Sample Input 1**
```plaintext
9
7 8
- -
- -
- -
0 1
2 3
4 5
- -
- -
```

**Sample Output 1**
```plaintext
YES 8
```

**Sample Input 2**
```plaintext
8
- -
4 5
0 6
- -
2 3
- 7
- -
- -
```

**Sample Output 2**
```plaintext
NO 1
```

