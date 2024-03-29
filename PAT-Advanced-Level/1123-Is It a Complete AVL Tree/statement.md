
# 1123 Is It a Complete AVL Tree

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

An AVL tree is a self-balancing binary search tree. In an AVL tree, the heights of the two child subtrees of any node differ by at most one; if at any time they differ by more than one, rebalancing is done to restore this property. Figures 1-4 illustrate the rotation rules.

|![F1.jpg](~/fb337acb-93b0-4af2-9838-deff5ce98058.jpg)|![F2.jpg](./statement-assets/d1635de7-3e3f-4aaa-889b-ba29f35890db.jpg)|
|-|-|
|![F3.jpg](~/e868e4b9-9fea-4f70-b7a7-1f5d8a3be4ef.jpg)|![F4.jpg](./statement-assets/98aa1782-cea5-4792-8736-999436cf43a9.jpg)|

    
Now given a sequence of insertions, you are supposed to output the level-order traversal sequence of the resulting AVL tree, and to tell if it is a complete binary tree.

**Input Specification**

Each input file contains one test case. For each case, the first line contains a positive integer N ($\le$ 20). Then N distinct integer keys are given in the next line. All the numbers in a line are separated by a space.

**Output Specification**

For each test case, insert the keys one by one into an initially empty AVL tree. Then first print in a line the level-order traversal sequence of the resulting AVL tree. All the numbers in a line must be separated by a space, and there must be no extra space at the end of the line. Then in the next line, print `YES` if the tree is complete, or `NO` if not.

**Sample Input 1**
```plaintext
5
88 70 61 63 65
```

**Sample Output 1**
```plaintext
70 63 88 61 65
YES
```

**Sample Input 2**
```plaintext
8
88 70 61 96 120 90 65 68
```

**Sample Output 2**
```plaintext
88 65 96 61 70 90 120 68
NO
```


