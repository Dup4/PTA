
# 1135 Is It A Red-Black Tree

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

There is a kind of balanced binary search tree named **red-black tree** in the data structure. It has the following 5 properties:

- (1) Every node is either red or black.
- (2) The root is black.
- (3) Every leaf (NULL) is black.
- (4) If a node is red, then both its children are black.
- (5) For each node, all simple paths from the node to descendant leaves contain the same number of black nodes.

For example, the tree in Figure 1 is a red-black tree, while the ones in Figure 2 and 3 are not.

|![rbf1.jpg](~/eff80bd4-c833-4818-9786-81680d1b304a.jpg)|![rbf2.jpg](~/b11184df-eaab-451c-b7d4-7fc1dc82b028.jpg)|![rbf3.jpg](./statement-assets/625c532b-22fc-47b9-80ea-0537cf00d922.jpg)|
|:------:|:------:|:------:|
|Figure 1|Figure 2|Figure 3|

For each given binary search tree, you are supposed to tell if it is a legal red-black tree.

**Input Specification**

Each input file contains several test cases.  The first line gives a positive integer K ($\le$30) which is the total number of cases.  For each case, the first line gives a positive integer N ($\le$30), the total number of nodes in the binary tree.  The second line gives the preorder traversal sequence of the tree.  While all the keys in a tree are positive integers, we use negative signs to represent red nodes.  All the numbers in a line are separated by a space.  The sample input cases correspond to the trees shown in Figure 1, 2 and 3.

**Output Specification**

For each test case, print in a line "Yes" if the given tree is a red-black tree, or "No" if not.

**Sample Input**
```plaintext
3
9
7 -2 1 5 -4 -11 8 14 -15
9
11 -2 1 -7 5 -4 8 14 -15
8
10 -7 5 -6 8 15 -11 17
```

**Sample Output**
```plaintext
Yes
No
No
```

