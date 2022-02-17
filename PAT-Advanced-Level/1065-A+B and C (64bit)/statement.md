
# 1065 A+B and C (64bit)

## Statement

!!! info "Metadata"
    作者: HOU, Qiming
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Given three integers $$A$$, $$B$$ and $$C$$ in ($$-2^{63}, 2^{63}$$), you are supposed to tell whether $$A+B > C$$.

### Input Specification:

The first line of the input gives the positive number of test cases, $$T$$ ($$\le 10$$). Then $$T$$ test cases follow, each consists of a single line containing three integers $$A$$, $$B$$ and $$C$$, separated by single spaces.

### Output Specification:

For each test case, output in one line `Case #X: true` if $$A+B>C$$, or `Case #X: false` otherwise, where $$X$$ is the case number (starting from 1).

### Sample Input:
```plaintext
3
1 2 3
2 3 4
9223372036854775807 -9223372036854775808 0
```

### Sample Output:
```plaintext
Case #1: false
Case #2: true
Case #3: false
```

**Thanks to Jiwen Lin for amending the test data.**

