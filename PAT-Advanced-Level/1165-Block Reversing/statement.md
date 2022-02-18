
# 1165 Block Reversing

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Given a singly linked list $L$.  Let us consider every $K$ nodes as a **block** (if there are less than $K$ nodes at the end of the list, the rest of the nodes are still considered as a block).  Your job is to reverse all the blocks in $L$.  For example, given $L$ as 1→2→3→4→5→6→7→8 and $K$ as 3, your output must be 7→8→4→5→6→1→2→3.

**Input Specification**

Each input file contains one test case. For each case, the first line contains the address of the first node, a positive $N$ ($\le 10^5$) which is the total number of nodes, and a positive $K$ ($\le N$) which is the size of a block. The address of a node is a 5-digit nonnegative integer, and NULL is represented by $-1$.

Then $N$ lines follow, each describes a node in the format:
```
Address Data Next
```

where `Address` is the position of the node, `Data` is an integer, and `Next` is the position of the next node.

**Output Specification**

For each case, output the resulting ordered linked list. Each node occupies a line, and is printed in the same format as in the input.

**Sample Input**
```plaintext
00100 8 3
71120 7 88666
00000 4 99999
00100 1 12309
68237 6 71120
33218 3 00000
99999 5 68237
88666 8 -1
12309 2 33218
```

**Sample Output**
```plaintext
71120 7 88666
88666 8 00000
00000 4 99999
99999 5 68237
68237 6 00100
00100 1 12309
12309 2 33218
33218 3 -1
```

