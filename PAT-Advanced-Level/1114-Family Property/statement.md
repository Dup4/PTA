
# 1114 Family Property

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

This time, you are supposed to help us collect the data for family-owned property. Given each person's family members, and the estate（房产）info under his/her own name, we need to know the size of each family, and the average area and number of sets of their real estate.

**Input Specification**

Each input file contains one test case. For each case, the first line gives a positive integer $N$ ($\le 1000$). Then $N$ lines follow, each gives the infomation of a person who owns estate in the format:

`ID` `Father` `Mother` $k$ $Child_1 \cdots Child_k$ $M_{estate}$ `Area`

where `ID` is a unique 4-digit identification number for each person; `Father` and `Mother` are the `ID`'s of this person's parents (if a parent has passed away, `-1` will be given instead); $k$ ($0\le k\le 5$) is the number of children of this person; $Child_i$'s are the `ID`'s of his/her children; $M_{estate}$ is the total number of sets of the real estate under his/her name; and `Area` is the total area of his/her estate.

**Output Specification**

For each case, first print in a line the number of families (all the people that are related directly or indirectly are considered in the same family). Then output the family info in the format:

`ID` `M` $AVG_{sets}$ $AVG_{area}$

where `ID` is the smallest ID in the family; `M` is the total number of family members; $AVG_{sets}$ is the average number of sets of their real estate; and $AVG_{area}$ is the average area. The average numbers must be accurate up to 3 decimal places. The families must be given in descending order of their average areas, and in ascending order of the ID's if there is a tie.

**Sample Input**
```plaintext
10
6666 5551 5552 1 7777 1 100
1234 5678 9012 1 0002 2 300
8888 -1 -1 0 1 1000
2468 0001 0004 1 2222 1 500
7777 6666 -1 0 2 300
3721 -1 -1 1 2333 2 150
9012 -1 -1 3 1236 1235 1234 1 100
1235 5678 9012 0 1 50
2222 1236 2468 2 6661 6662 1 300
2333 -1 3721 3 6661 6662 6663 1 100
```

**Sample Output**
```plaintext
3
8888 1 1.000 1000.000
0001 15 0.600 100.000
5551 4 0.750 100.000
```

