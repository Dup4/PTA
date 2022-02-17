
# 1100 Mars Numbers

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

People on Mars count their numbers with base 13:

- Zero on Earth is called "tret" on Mars.
- The numbers 1 to 12 on Earth is called "jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec" on Mars, respectively.
- For the next higher digit, Mars people name the 12 numbers as "tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou", respectively.

For examples, the number 29 on Earth is called "hel mar" on Mars; and "elo nov" on Mars corresponds to 115 on Earth. In order to help communication between people from these two planets, you are supposed to write a program for mutual translation between Earth and Mars number systems.

### Input Specification:

Each input file contains one test case. For each case, the first line contains a positive integer $$N$$ ($$< 100$$). Then $$N$$ lines follow, each contains a number in [0, 169), given either in the form of an Earth number, or that of Mars.

### Output Specification:

For each number, print in a line the corresponding number in the other language.

### Sample Input:
```plaintext
4
29
5
elo nov
tam
```

### Sample Output:
```plaintext
hel mar
may
115
13
```


