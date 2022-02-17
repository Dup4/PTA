
# 1158 Telefraud Detection

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Telefraud（电信诈骗） remains a common and persistent problem in our society.  In some cases, unsuspecting victims lose their entire life savings.  To stop this crime, you are supposed to write a program to detect those suspects from a huge amount of phone call records.

A person must be detected as a suspect if he/she makes more than $$K$$ short phone calls to **different** people everyday, but no more than 20% of these people would call back.  And more, if two suspects are calling each other, we say they might belong to the same gang.  $$A$$ makes a **short** phone call to $$B$$ means that the total duration of the calls from $$A$$ to $$B$$ is no more than 5 minutes.

### Input Specification:

Each input file contains one test case. For each case, the first line gives 3 positive integers $$K$$ ($$\le 500$$, the threshold（阈值） of the amount of short phone calls), $$N$$ ($$\le 10^3$$, the number of different phone numbers), and $$M$$ ($$\le 10^5$$, the number of phone call records).  Then $$M$$ lines of one day's records are given, each in the format:
```
caller receiver duration
```

where `caller` and `receiver` are numbered from 1 to $$N$$, and `duration` is no more than 1440 minutes in a day.

### Output Specification:

Print in each line all the detected suspects in a gang, in ascending order of their numbers.  The gangs are printed in ascending order of their first members.  The numbers in a line must be separated by exactly 1 space, and there must be no extra space at the beginning or the end of the line.

If no one is detected, output `None` instead.

### Sample Input 1:
```plaintext
5 15 31
1 4 2
1 5 2
1 5 4
1 7 5
1 8 3
1 9 1
1 6 5
1 15 2
1 15 5
3 2 2
3 5 15
3 13 1
3 12 1
3 14 1
3 10 2
3 11 5
5 2 1
5 3 10
5 1 1
5 7 2
5 6 1
5 13 4
5 15 1
11 10 5
12 14 1
6 1 1
6 9 2
6 10 5
6 11 2
6 12 1
6 13 1
```

### Sample Output 1:
```plaintext
3 5
6
```
**Note:** In sample 1, although `1` had 9 records, but there were 7 distinct receivers, among which `5` and `15` both had conversations lasted more than 5 minutes in total.  Hence `1` had made 5 short phone calls and didn't exceed the threshold 5, and therefore is not a suspect.

### Sample Input 2:
```plaintext
5 7 8
1 2 1
1 3 1
1 4 1
1 5 1
1 6 1
1 7 1
2 1 1
3 1 1
```

### Sample Output 2:
```plaintext
None
```



