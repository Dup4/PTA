
# 1026 String of Colorful Beads

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 150 ms
    - 内存限制: 64 MB

Eva would like to buy a string of beads with no repeated colors so she went to a small shop of which the owner had a very long string of beads. However the owner would only like to cut one piece at a time for his customer. With as many as ten thousand beads in the string, Eva needs your help to tell her how to obtain the longest piece of string that contains beads with all different colors. And more, each kind of these beads has a different value. If there are more than one way to get the longest piece, Eva would like to take the most valuable one. It is guaranteed that such a solution is unique.

**Input Specification**

Each input file contains one test case. Each case first gives in a line a positive integer N ($\le$ 10,000) which is the length of the original string in the shop. Then N positive numbers ($\le$ 100) are given in the next line, which are the values of the beads -- here we assume that the types of the beads are numbered from 1 to N, and the i-th number is the value of the i-th type of beads. Finally the last line describes the original string by giving the types of the beads from left to right. All the numbers in a line are separated by spaces.

**Output Specification**

For each test case, print in a line the total value of the piece of string that Eva wants, together with the beginning and the ending indices of the piece (start from 0). All the numbers must be separated by a space and there must be no extra spaces at the beginning or the end of the line.

**Sample Input**
```plaintext
8
18 20 2 97 23 12 8 5
3 3 5 8 1 5 2 1
```

**Sample Output**
```plaintext
66 3 6
```

