
# 1038 Recover the Smallest Number

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

Given a collection of number segments, you are supposed to recover the smallest number from them. For example, given { 32, 321, 3214, 0229, 87 }, we can recover many numbers such like 32-321-3214-0229-87 or 0229-32-87-321-3214 with respect to different orders of combinations of these segments, and the smallest number is 0229-321-3214-32-87.

**Input Specification**

Each input file contains one test case. Each case gives a positive integer $N$ ($\le 10^4$) followed by $N$ number segments. Each segment contains a non-negative integer of no more than 8 digits. All the numbers in a line are separated by a space.

**Output Specification**

For each test case, print the smallest number in one line. Notice that the first digit must not be zero.

**Sample Input**
```plaintext
5 32 321 3214 0229 87
```

**Sample Output**
```plaintext
22932132143287
```

