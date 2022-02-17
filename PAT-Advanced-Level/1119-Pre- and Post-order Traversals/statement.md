
# 1119 Pre- and Post-order Traversals

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Suppose that all the keys in a binary tree are distinct positive integers. A unique binary tree can be determined by a given pair of postorder and inorder traversal sequences, or preorder and inorder traversal sequences. However, if only the postorder and preorder traversal sequences are given, the corresponding tree may no longer be unique.

Now given a pair of postorder and preorder traversal sequences, you are supposed to output the corresponding inorder traversal sequence of the tree. If the tree is not unique, simply output any one of them.

### Input Specification:

Each input file contains one test case. For each case, the first line gives a positive integer N ($$\le$$ 30), the total number of nodes in the binary tree. The second line gives the preorder sequence and the third line gives the postorder sequence. All the numbers in a line are separated by a space.

### Output Specification:

For each test case, first printf in a line `Yes` if the tree is unique, or `No` if not. Then print in the next line the inorder traversal sequence of the corresponding binary tree. If the solution is not unique, any answer would do. It is guaranteed that at least one solution exists. All the numbers in a line must be separated by exactly one space, and there must be no extra space at the end of the line.

### Sample Input 1:
```plaintext
7
1 2 3 4 6 7 5
2 6 7 4 5 3 1
```

### Sample Output 1:
```plaintext
Yes
2 1 6 4 7 3 5
```

### Sample Input 2:
```plaintext
4
1 2 3 4
2 4 3 1
```

### Sample Output 2:
```plaintext
No
2 1 3 4
```


