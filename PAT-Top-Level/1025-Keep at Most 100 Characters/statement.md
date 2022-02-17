
# 1025 Keep at Most 100 Characters

## Statement

!!! info "Metadata"
    作者: CAO, Peng
    单位: Google
    代码长度限制: 16 KB
    时间限制: 150 ms
    内存限制: 64 MB

Given a string which contains only lower case letters, how many different non-empty strings you can get if you can keep **AT MOST** 100 characters in the original order? (Note: The string obtained is a "sub-sequence" of the original string.)

### Input Specification:

Each input file contains one test case, which is only one line containing the string whose length is no larger than 1000.

### Output Specification:

Output the number of different non-empty strings if you can only keep at most 100 characters. **Since the answer might be super large, you only need to output the answer modulo 1000000007.**

### Sample Input:
```plaintext
aabac
```

### Sample Output:
```plaintext
19
```

### Hint:

The strings are:

`a`, `b`, `c`, `aa`, `ab`, `ac`, `ba`, `bc`, `aab`, `aaa`, `aac`, `aba`, `abc`, `bac`, `aaba`, `aabc`, `abac`, `aaac`, and `aabac`.

