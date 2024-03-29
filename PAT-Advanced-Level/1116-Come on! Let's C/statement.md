
# 1116 Come on! Let's C

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

"Let's C" is a popular and fun programming contest hosted by the College of Computer Science and Technology, Zhejiang University. Since the idea of the contest is for fun, the award rules are funny as the following:

- 0、 The Champion will receive a "Mystery Award" (such as a BIG collection of students' research papers...).
- 1、 Those who ranked as a prime number will receive the best award -- the Minions (小黄人)!
- 2、 Everyone else will receive chocolates.

Given the final ranklist and a sequence of contestant ID's, you are supposed to tell the corresponding awards.

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer N ($\le 10^4$), the total number of contestants. Then N lines of the ranklist follow, each in order gives a contestant's ID (a 4-digit number). After the ranklist, there is a positive integer K followed by K query ID's.

**Output Specification**

For each query, print in a line `ID: award` where the award is `Mystery Award`, or `Minion`, or `Chocolate`. If the ID is not in the ranklist, print `Are you kidding?` instead. If the ID has been checked before, print `ID: Checked`.

**Sample Input**
```plaintext
6
1111
6666
8888
1234
5555
0001
6
8888
0001
1111
2222
8888
2222
```

**Sample Output**
```plaintext
8888: Minion
0001: Chocolate
1111: Mystery Award
2222: Are you kidding?
8888: Checked
2222: Are you kidding?
```

