
# 1006 Tree Traversals - Hard Version

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Given the partial results of a binary tree's traversals in in-order, pre-order, and post-order. You are supposed to output the complete results and the level order traversal sequence of the corresponding tree.

**Input Specification**

Each input file contains one test case. For each case, a positive integer $N$ ($\le 100$) is given in the first line. Then three lines follow, containing the incomplete in-order, pre-order and post-order traversal sequences, respectively. It is assumed that the tree nodes are numbered from 1 to $N$ and no number is given out of the range. A `-` represents a missing number.

**Output Specification**

For each case, print in four lines the complete in-order, pre-order and post-order traversal sequences, together with the level order traversal sequence of the corresponding tree. The numbers must be separated by a space, and there must be no extra space at the beginning or the end of each line. If it is impossible to reconstruct the unique tree from the given information, simply print `Impossible`.

**Sample Input 1**
```plaintext
9
3 - 2 1 7 9 - 4 6
9 - 5 3 2 1 - 6 4
3 1 - - 7 - 6 8 -
```

**Sample Output 1**
```plaintext
3 5 2 1 7 9 8 4 6
9 7 5 3 2 1 8 6 4
3 1 2 5 7 4 6 8 9
9 7 8 5 6 3 2 4 1
```

**Sample Input 2**
```plaintext
3
- - -
- 1 -
1 - -
```

**Sample Output 2**
```plaintext
Impossible
```

