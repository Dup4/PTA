
# 1018 Subnumbers

## Statement

!!! info "Metadata"
    作者: CAO, Peng
    单位: Google
    代码长度限制: 16 KB
    时间限制: 200 ms
    内存限制: 64 MB

Given a positive integer $$N$$, let us define a **subnumber** of $$N$$ as a consecutive number of digits **NOT starting with 0**. For example if $$N = 1021$$, it has 7 subnumbers, namely, 1, 10, 102, 1021, 2, 21 and 1 (again). Here is your task: please calculate the sum of all the subnumbers of $$N$$. For 1021, the sum is 1+10+102+1021+2+21+1 = 1158. Since the result may be very large, output the answer modulo 1000000007 ($$10^9 + 7$$) please.

### Input Specification:

Each input file contains one test case, which gives the integer $$N$$ ($$0 < N < 10^{100000}$$) in a line.

### Output Specification:

Print in a line the sum of all $$N$$'s subnumbers (modulo 1000000007).

### Sample Input:
```plaintext
1234567890123456789
```

### Sample Output:
```plaintext
332876913
```


