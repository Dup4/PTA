
# 1041 Be Unique

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

Being unique is so important to people on Mars that even their lottery is designed in a unique way. The rule of winning is simple: one bets on a number chosen from [$1, 10^4$]. The first one who bets on a unique number wins. For example, if there are 7 people betting on { 5 31 5 88 67 88 17 }, then the second one who bets on 31 wins.

**Input Specification**

Each input file contains one test case. Each case contains a line which begins with a positive integer $N$ ($\le 10^5$) and then followed by $N$ bets. The numbers are separated by a space.

**Output Specification**

For each test case, print the winning number in a line. If there is no winner, print `None` instead.

**Sample Input 1**
```plaintext
7 5 31 5 88 67 88 17
```

**Sample Output 1**
```plaintext
31
```

**Sample Input 2**
```plaintext
5 888 666 666 888 888
```

**Sample Output 2**
```plaintext
None
```

