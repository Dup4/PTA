
# 1159 Structure of a Binary Tree

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Suppose that all the keys in a binary tree are distinct positive integers. Given the postorder and inorder traversal sequences, a binary tree can be uniquely determined.

Now given a sequence of statements about the structure of the resulting tree, you are supposed to tell if they are correct or not.  A statment is one of the following:

- A is the root
- A and B are siblings
- A is the parent of B
- A is the left child of B
- A is the right child of B
- A and B are on the same level
- It is a full tree

Note:

- Two nodes are **on the same level**, means that they have the same depth.
- A **full binary tree** is a tree in which every node other than the leaves has two children.

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer $N$ ($\le 30$), the total number of nodes in the binary tree. The second line gives the postorder sequence and the third line gives the inorder sequence. All the numbers in a line are no more than $10^3$ and are separated by a space.

Then another positive integer $M$ ($\le 30$) is given, followed by $M$ lines of statements.  It is guaranteed that both `A` and `B` in the statements are in the tree.

**Output Specification**

For each statement, print in a line `Yes` if it is correct, or `No` if not.

**Sample Input**
```plaintext
9
16 7 11 32 28 2 23 8 15
16 23 7 32 11 2 28 15 8
7
15 is the root
8 and 2 are siblings
32 is the parent of 11
23 is the left child of 16
28 is the right child of 2
7 and 11 are on the same level
It is a full tree
```

**Sample Output**
```plaintext
Yes
No
Yes
No
Yes
Yes
Yes
```

