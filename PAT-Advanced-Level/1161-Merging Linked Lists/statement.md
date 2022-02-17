
# 1161 Merging Linked Lists

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Given two singly linked lists $$L_1 = a_1 \to a_2\to \cdots \to a_{n-1}\to a_n$$ and $$L_2 = b_1 \to b_2\to \cdots \to b_{m-1}\to b_m$$.  If $$n\ge 2m$$, you are supposed to reverse and merge the shorter one into the longer one to obtain a list like $$a_1 \to a_2 \to b_{m} \to a_3 \to a_4 \to b_{m-1}\cdots $$. For example, given one list being 6→7 and the other one 1→2→3→4→5, you must output 1→2→7→3→4→6→5.

### Input Specification:

Each input file contains one test case. For each case, the first line contains the two addresses of the first nodes of $$L_1$$ and $$L_2$$, plus a positive $$N$$ ($$\le 10^5$$) which is the total number of nodes given. The address of a node is a 5-digit nonnegative integer, and NULL is represented by `-1`.

Then $$N$$ lines follow, each describes a node in the format:
```
Address Data Next
```
where `Address` is the position of the node, `Data` is a positive integer no more than $$10^5$$, and `Next` is the position of the next node. It is guaranteed that no list is empty, and the longer list is at least twice as long as the shorter one.

### Output Specification:

For each case, output in order the resulting linked list. Each node occupies a line, and is printed in the same format as in the input.

### Sample Input:
```plaintext
00100 01000 7
02233 2 34891
00100 6 00001
34891 3 10086
01000 1 02233
00033 5 -1
10086 4 00033
00001 7 -1
```

### Sample Output:
```plaintext
01000 1 02233
02233 2 00001
00001 7 34891
34891 3 10086
10086 4 00100
00100 6 00033
00033 5 -1
```


