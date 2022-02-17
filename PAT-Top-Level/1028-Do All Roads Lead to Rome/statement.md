
# 1028 Do All Roads Lead to Rome

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 700 ms
    内存限制: 64 MB

Indeed there are many different tourist routes from our city to Rome. Your job is to count the number of different routes from our city to Rome, and to check if ALL the routes lead to Rome -- that is, whether or not all the routes from our city to Rome can cover every road on the routes from our city to anywhere.

### Input Specification:

Each input file contains one test case. For each case, the first line contains 2 positive integers $$N$$ ($$2\le N\le 20$$), the number of cities, and $$K$$, the total number of roads between pairs of cities; followed by the name of the starting city. Then $$K$$ lines follow, each describes a road between two cities in the format `City1 City2`. Here the name of a city is a string of 3 capital English letters, and the destination is always `ROM` which represents Rome.

### Output Specification:

For each test case, first print in a line `Yes` if all the routes from the starting city lead to 	`ROM`, or `No` if not.  Then print in the next line the number of different routes from the starting city to `ROM`.  Here a **route** is defined to be a **simple path**, that is, no city along the route will be visited more than once.  It is guaranteed that this number is no more than $$10^6$$.  By the way, it is assumed that `ROM` is our only destination -- that is, once we reach `ROM`, we will stop traveling and stay there.

### Sample Input 1:
```plaintext
7 8 HZH
PKN HZH
GDN ROM
ROM HKG
PRS PKN
PRS BLN
HKG PRS
ROM BLN
HZH GDN
```

### Sample Output 1:
```plaintext
Yes
3
```

### Sample Input 2:
```plaintext
10 11 HZH
PKN HZH
GDN ROM
ROM HKG
PRS PKN
PRS BLN
HKG PRS
ROM BLN
HZH GDN
GDN MAC
MAC WWW
MAC VVV
```

### Sample Output 2:
```plaintext
No
3
```


