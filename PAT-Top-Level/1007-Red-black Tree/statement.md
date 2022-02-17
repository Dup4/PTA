
# 1007 Red-black Tree

## Statement

!!! info "Metadata"
    作者: CAO, Peng
    单位: Google
    代码长度限制: 16 KB
    时间限制: 150 ms
    内存限制: 64 MB

There is a kind of binary tree named **red-black tree** in the data structure. It has the following 5 properties:

- (1) Every node is either red or black.
- (2) The root is black.
- (3) All the leaves are NULL nodes and are colored black.
- (4) Each red node must have 2 black descends (may be NULL).
- (5) All simple paths from any node x to a descendant leaf have the same number of black nodes.

We call a non-NULL node an **internal node**. From property (5) we can define the **black-height** of a red-black tree as the number of nodes on the simple path from the root (excluding the root itself) to any NULL leaf (including the NULL leaf). And we can derive that a red-black tree with black height H has at least $$2^H-1$$ internal nodes.

Here comes the question: given a positive $$N$$, how many distinct red-black trees are there that consist of exactly $$N$$ internal nodes?

### Input Specification:

Each input file contains one test case which gives a positive integer $$N$$ ($$\le  500$$).

### Output Specification:

For each case, print in a line the number of distinct red-black tees with $$N$$ internal nodes. Since the answer may be very large, output the remainder of it divided by 1000000007 please.

### Sample Input:
```plaintext
5
```

### Sample Output:
```plaintext
8
```


