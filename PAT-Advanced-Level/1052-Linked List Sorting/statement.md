
# 1052 Linked List Sorting

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

A linked list consists of a series of structures, which are not necessarily adjacent in memory. We assume that each structure contains an integer `key` and a `Next` pointer to the next structure. Now given a linked list, you are supposed to sort the structures according to their key values in increasing order.

### Input Specification:

Each input file contains one test case. For each case, the first line contains a positive $$N$$ ($$< 10^5$$) and an address of the head node, where $$N$$ is the total number of nodes in memory and the address of a node is a 5-digit positive integer. NULL is represented by $$-1$$.

Then $$N$$ lines follow, each describes a node in the format:
```
Address Key Next
```
where `Address` is the address of the node in memory, `Key` is an integer in [$$-10^5, 10^5$$], and `Next` is the address of the next node. It is guaranteed that all the keys are distinct and there is no cycle in the linked list starting from the head node.

### Output Specification:

For each test case, the output format is the same as that of the input, where $$N$$ is the total number of nodes in the list and all the nodes must be sorted order.

### Sample Input:
```plaintext
5 00001
11111 100 -1
00001 0 22222
33333 100000 11111
12345 -1 33333
22222 1000 12345
```

### Sample Output:
```plaintext
5 12345
12345 -1 00001
00001 0 11111
11111 100 22222
22222 1000 33333
33333 100000 -1
```


