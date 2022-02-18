
# 1009 Product of Polynomials

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

This time, you are supposed to find $A\times B$ where $A$ and $B$ are two polynomials.

**Input Specification**

Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:

$K$ $N_1$ $a_{N_1}$ $N_2$ $a_{N_2}$ ... $N_K$ $a_{N_K}$

where $K$ is the number of nonzero terms in the polynomial, $N_i$ and $a_{N_i}$ ($i=1, 2, \cdots , K$) are the exponents and coefficients, respectively.  It is given that $1\le K \le 10$, $0 \le N_K < \cdots < N_2 < N_1 \le 1000$.  


**Output Specification**

For each test case you should output the product of $A$ and $B$ in one line, with the same format as the input.  Notice that there must be **NO** extra space at the end of each line.  Please be accurate up to 1 decimal place. 

**Sample Input**
```plaintext
2 1 2.4 0 3.2
2 2 1.5 1 0.5
```

**Sample Output**
```plaintext
3 3 3.6 2 6.0 1 1.6
```

