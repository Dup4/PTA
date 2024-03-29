
# 1028 List Sorting

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Excel can sort records according to any column. Now you are supposed to imitate this function.

**Input Specification**

Each input file contains one test case. For each case, the first line contains two integers $N$ ($\le 10^5$) and $C$, where $N$ is the number of records and $C$ is the column that you are supposed to sort the records with. Then $N$ lines follow, each contains a record of a student. A student's record consists of his or her distinct ID (a 6-digit number), name (a string with no more than 8 characters without space), and grade (an integer between 0 and 100, inclusive).

**Output Specification**

For each test case, output the sorting result in $N$ lines. That is, if $C$ = 1 then the records must be sorted in increasing order according to ID's; if $C$ = 2 then the records must be sorted in non-decreasing order according to names; and if $C$ = 3 then the records must be sorted in non-decreasing order according to grades. If there are several students who have the same name or grade, they must be sorted according to their ID's in increasing order.

**Sample Input 1**
```plaintext
3 1
000007 James 85
000010 Amy 90
000001 Zoe 60

```

**Sample Output 1**
```plaintext
000001 Zoe 60
000007 James 85
000010 Amy 90

```

**Sample Input 2**
```plaintext
4 2
000007 James 85
000010 Amy 90
000001 Zoe 60
000002 James 98

```

**Sample Output 2**
```plaintext
000010 Amy 90
000002 James 98
000007 James 85
000001 Zoe 60

```

**Sample Input 3**
```plaintext
4 3
000007 James 85
000010 Amy 90
000001 Zoe 60
000002 James 9

```

**Sample Output 3**
```plaintext
000002 James 9
000001 Zoe 60
000007 James 85
000010 Amy 90

```

**鸣谢用户 wangzhj 补充数据！**
