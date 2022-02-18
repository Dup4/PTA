
# 1020 Delete At Most Two Characters

## Statement

!!! info "Metadata"
    - 作者: CAO, Peng
    - 单位: Google
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

Given a string which contains only lower case English letters, how many different strings you can get after deleting **AT MOST TWO** characters in it?


**Input Specification**

Each input file contains one test case, which gives the string whose length is in $[3, 10^6]$.

**Output Specification**

Print in a line the number of different strings you can get after deleting at most 2 characters.

**Sample Input**
```plaintext
ababcc
```

**Sample Output**
```plaintext
15
```

**Hint**

Deleting 0 character gets `ababcc`.

Deleting 1 character gets `babcc`, `aabcc`, `abbcc`, `abacc` and `ababc`. 

Deleting 2 character gets `abcc`, `bbcc`, `bacc`, `babc`, `aacc`, `aabc`, `abbc`, `abac` and `abab`.
