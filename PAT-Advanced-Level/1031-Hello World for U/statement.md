
# 1031 Hello World for U

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Given any string of $N$ ($\ge 5$) characters, you are asked to form the characters into the shape of `U`. For example, `helloworld` can be printed as:
```
h  d
e  l
l  r
lowo
```

That is, the characters must be printed in the original order, starting top-down from the left vertical line with $n_1$ characters, then left to right along the bottom line with $n_2$ characters, and finally bottom-up along the vertical line with $n_3$ characters. And more, we would like `U` to be as squared as possible -- that is, it must be satisfied that $n_1 = n_3 = max$ { $k$ | $k \le n_2$ for all $3 \le n_2 \le N$ } with $n_1 + n_2 + n_3 - 2 = N$.

**Input Specification**

Each input file contains one test case. Each case contains one string with no less than 5 and no more than 80 characters in a line. The string contains no white space.

**Output Specification**

For each test case, print the input string in the shape of U as specified in the description.

**Sample Input**
```plaintext
helloworld!
```

**Sample Output**
```plaintext
h   !
e   d
l   l
lowor
```

