
# 1066 Root of AVL Tree

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

An AVL tree is a self-balancing binary search tree.  In an AVL tree, the heights of the two child subtrees of any node differ by at most one; if at any time they differ by more than one, rebalancing is done to restore this property.  Figures 1-4 illustrate the rotation rules.

<center>

![F1.jpg](~/8e3c8cca-d5ab-490b-be8b-c7101ffb94a4.jpg)
![F2.jpg](~/bcdb39fb-08b6-41d8-8a3d-96708e4ad97c.jpg)


![](~/33) 
![](~/34)
</center>
Now given a sequence of insertions, you are supposed to tell the root of the resulting AVL tree.

**Input Specification**

Each input file contains one test case.  For each case, the first line contains a positive integer $N$ ($\le 20$) which is the total number of keys to be inserted.  Then $N$ distinct integer keys are given in the next line.  All the numbers in a line are separated by a space.

**Output Specification**

For each test case, print the root of the resulting AVL tree in one line.

**Sample Input 1**
```plaintext
5
88 70 61 96 120
```

**Sample Output 1**
```plaintext
70
```

**Sample Input 2**
```
7
88 70 61 96 120 90 65
```

**Sample Output 2**
```
88
```
