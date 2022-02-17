
# 1048 Find Coins

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 150 ms
    内存限制: 64 MB

Eva loves to collect coins from all over the universe, including some other planets like Mars. One day she visited a universal shopping mall which could accept all kinds of coins as payments. However, there was a special requirement of the payment: for each bill, she could only use exactly two coins to pay the exact amount. Since she has as many as $$10^5$$ coins with her, she definitely needs your help. You are supposed to tell her, for any given amount of money, whether or not she can find two coins to pay for it.

### Input Specification:

Each input file contains one test case. For each case, the first line contains 2 positive numbers: $$N$$ ($$\le 10^5$$, the total number of coins) and $$M$$ ($$\le 10^3$$, the amount of money Eva has to pay). The second line contains $$N$$ face values of the coins, which are all positive numbers no more than 500. All the numbers in a line are separated by a space.

### Output Specification:

For each test case, print in one line the two face values $$V_1$$ and $$V_2$$ (separated by a space) such that $$V_1 + V_2 = M$$ and $$V_1 \le V_2$$. If such a solution is not unique, output the one with the smallest $$V_1$$. If there is no solution, output `No Solution` instead.

### Sample Input 1:
```plaintext
8 15
1 2 8 7 2 4 11 15
```

### Sample Output 1:
```plaintext
4 11
```

### Sample Input 2:
```plaintext
7 14
1 8 7 2 4 11 15
```

### Sample Output 2:
```plaintext
No Solution
```


