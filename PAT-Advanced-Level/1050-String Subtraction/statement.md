
# 1050 String Subtraction

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 100 ms
    - 内存限制: 64 MB

Given two strings $S_1$ and $S_2$, $S = S_1 - S_2$ is defined to be the remaining string after taking all the characters in $S_2$ from $S_1$. Your task is simply to calculate $S_1 - S_2$ for any given strings. However, it might not be that simple to do it **fast**.

**Input Specification**

Each input file contains one test case. Each case consists of two lines which gives $S_1$ and $S_2$, respectively. The string lengths of both strings are no more than $10^4$. It is guaranteed that all the characters are visible ASCII codes and white space, and a new line character signals the end of a string.

**Output Specification**

For each test case, print $S_1 - S_2$ in one line.

**Sample Input**
```plaintext
They are students.
aeiou
```

**Sample Output**
```plaintext
Thy r stdnts.
```

