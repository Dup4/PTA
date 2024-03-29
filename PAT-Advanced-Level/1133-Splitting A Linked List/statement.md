
# 1133 Splitting A Linked List

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Given a singly linked list, you are supposed to rearrange its elements so that all the negative values appear before all of the non-negatives, and all the values in [0, K] appear before all those greater than K. The order of the elements inside each class must not be changed. For example, given the list being 18→7→-4→0→5→-6→10→11→-2 and K being 10, you must output -4→-6→-2→7→0→5→10→18→11.

**Input Specification**

Each input file contains one test case. For each case, the first line contains the address of the first node, a positive N ($\le 10^5$) which is the total number of nodes, and a positive K ($\le 10^3$). The address of a node is a 5-digit nonnegative integer, and NULL is represented by $-1$.

Then N lines follow, each describes a node in the format:
```
Address Data Next
```
where `Address` is the position of the node, `Data` is an integer in $[-10^5, 10^5]$, and `Next` is the position of the next node. It is guaranteed that the list is not empty.

**Output Specification**

For each case, output in order (from beginning to the end of the list) the resulting linked list. Each node occupies a line, and is printed in the same format as in the input.

**Sample Input**
```plaintext
00100 9 10
23333 10 27777
00000 0 99999
00100 18 12309
68237 -6 23333
33218 -4 00000
48652 -2 -1
99999 5 68237
27777 11 48652
12309 7 33218
```

**Sample Output**
```plaintext
33218 -4 68237
68237 -6 48652
48652 -2 12309
12309 7 00000
00000 0 99999
99999 5 23333
23333 10 00100
00100 18 27777
27777 11 -1
```

