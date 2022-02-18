
# 1008 Airline Routes

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Given a map of airline routes, you are supposed to check if a round trip can be planned between any pair of cities.

**Input Specification**

Each input file contains one test case. For each case, the first line gives two positive integers $N$ ($2\le N \le 10^4$) and $M$ ($\le 6N$), which are the total number of cities (hence the cities are numbered from 1 to $N$) and the number of airline routes, respectively. Then $M$ lines follow, each gives the information of a route in the format of the source city index first, and then the destination city index, separated by a space. It is guaranteed that the source is never the same as the destination.

After the map information, another positive integer $K$ is given, which is the number of queries. Then $K$ lines of queries follow, each contains a pair of distinct cities' indices.

**Output Specification**

For each query, output in a line `Yes` if a round trip is possible, or `No` if not.

**Sample Input**
```plaintext
12 19
3 4
1 3
12 11
5 9
6 2
3 2
10 7
9 1
7 12
2 4
9 5
2 6
12 4
11 10
4 8
8 12
11 8
12 7
1 5
20
11 4
12 7
3 6
2 3
5 3
3 9
4 3
8 3
8 10
10 11
7 8
7 1
9 5
1 9
2 6
3 1
3 12
7 3
6 9
6 8
```

**Sample Output**
```plaintext
Yes
Yes
No
No
No
No
No
No
Yes
Yes
Yes
No
Yes
Yes
Yes
No
No
No
No
No
```

