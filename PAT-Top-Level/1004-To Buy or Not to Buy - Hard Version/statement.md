
# 1004 To Buy or Not to Buy - Hard Version

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Eva would like to make a string of beads with her favorite colors so she went to a small shop to buy some beads. There were many colorful strings of beads. However the owner of the shop would only sell the strings in whole pieces. Hence in some cases Eva might have to buy several strings to get all the beads she needs. With a hundred strings in the shop, Eva needs your help to tell her whether or not she can get all the beads she needs with the least number of extra beads she has to pay for.

For the sake of simplicity, let's use the characters in the ranges [0-9], [a-z], and [A-Z] to represent the colors. In sample 1, buying the 2nd and the last two strings is the best way since there are only 3 extra beads. In sample 2, buying all the three strings won't help since there are three `R` beads missing.

### Input Specification:

Each input file contains one test case. Each case first gives in a line the string that Eva wants. Then a positive integer $$N$$ ($$\le 100$$) is given in the next line, followed by $$N$$ lines of strings that belong to the shop. All the strings contain no more than 1000 beads.

### Output Specification:

For each test case, print your answer in one line. If the answer is `Yes`, then also output the least number of extra beads Eva has to buy; or if the answer is `No`, then also output the number of beads missing from all the strings. There must be exactly 1 space between the answer and the number.

### Sample Input 1:
```plaintext
RYg5
8
gY5Ybf
8R5
12346789
gRg8h
5Y37
pRgYgbR52
8Y
8g
```

### Sample Output 1:
```plaintext
Yes 3
```

### Sample Input 2:
```plaintext
YrRR8RRrY
3
ppRGrrYB225
8ppGrrB25
Zd6KrY
```

### Sample Output 2:
```plaintext
No 3
```

