
# 1024 Palindromic Number

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

A number that will be the same when it is written forwards or backwards is known as a **Palindromic Number**. For example, 1234321 is a palindromic number. All single digit numbers are palindromic numbers.

Non-palindromic numbers can be paired with palindromic ones via a series of operations. First, the non-palindromic number is reversed and the result is added to the original number. If the result is not a palindromic number, this is repeated until it gives a palindromic number. For example, if we start from 67, we can obtain a palindromic number in 2 steps: 67 + 76 = 143, and 143 + 341 = 484.

Given any positive integer $N$, you are supposed to find its paired palindromic number and the number of steps taken to find it.

**Input Specification**

Each input file contains one test case. Each case consists of two positive numbers $N$ and $K$, where $N$ ($\le 10^{10}$) is the initial numer and $K$ ($\le 100$) is the maximum number of steps. The numbers are separated by a space.

**Output Specification**

For each test case, output two numbers, one in each line. The first number is the paired palindromic number of $N$, and the second number is the number of steps taken to find the palindromic number. If the palindromic number is not found after $K$ steps, just output the number obtained at the $K$th step and $K$ instead.

**Sample Input 1**
```plaintext
67 3
```

**Sample Output 1**
```plaintext
484
2
```

**Sample Input 2**
```plaintext
69 3
```

**Sample Output 2**
```plaintext
1353
3
```

