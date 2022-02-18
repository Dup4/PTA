
# 1010 Lehmer Code

## Statement

!!! info "Metadata"
    - 作者: LIU, Yaoting
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

According to Wikipedia: "In mathematics and in particular in combinatorics, the **Lehmer code** is a particular way to encode each possible permutation of a sequence of $n$ numbers." To be more specific, for a given permutation of items {$A_1$, $A_2$, $\cdots$, $A_n$}, Lehmer code is a sequence of numbers {$L_1$, $L_2$, $\cdots$, $L_n$} such that $L_i$ is the total number of items from $A_i$ to $A_n$ which are less than $A_i$. For example, given { 24, 35, 12, 1, 56, 23 }, the second Lehmer code $L_2$ is 3 since from 35 to 23 there are three items, { 12, 1, 23 }, less than the second item, 35.

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer $N$ ($\le 10^5$). Then $N$ distinct numbers are given in the next line.

**Output Specification**

For each test case, output in a line the corresponding Lehmer code. The numbers must be separated by exactly one space, and there must be no extra space at the beginning or the end of the line.

**Sample Input**
```plaintext
6
24 35 12 1 56 23
```

**Sample Output**
```plaintext
3 3 1 0 1 0
```

