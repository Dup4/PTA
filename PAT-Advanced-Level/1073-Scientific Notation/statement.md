
# 1073 Scientific Notation

## Statement

!!! info "Metadata"
    - 作者: HOU, Qiming
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

Scientific notation is the way that scientists easily handle very large numbers or very small numbers. The notation matches the regular expression [+-][1-9]`.`[0-9]+E[+-][0-9]+ which means that the integer portion has exactly one digit, there is at least one digit in the fractional portion, and the number and its exponent's signs are always provided even when they are positive.

Now given a real number $A$ in scientific notation, you are supposed to print $A$ in the conventional notation while keeping all the significant figures.

**Input Specification**

Each input contains one test case. For each case, there is one line containing the real number $A$ in scientific notation. The number is no more than 9999 bytes in length and the exponent's absolute value is no more than 9999.

**Output Specification**

For each test case, print in one line the input number $A$ in the conventional notation, with all the significant figures kept, including trailing zeros.

**Sample Input 1**
```plaintext
+1.23400E-03
```

**Sample Output 1**
```plaintext
0.00123400
```

**Sample Input 2**
```plaintext
-1.2E+10
```

**Sample Output 2**
```plaintext
-12000000000
```

