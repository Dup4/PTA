
# 1072 Gas Station

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

A gas station has to be built at such a location that the minimum distance between the station and any of the residential housing is as far away as possible. However it must guarantee that all the houses are in its service range.

Now given the map of the city and several candidate locations for the gas station, you are supposed to give the best recommendation. If there are more than one solution, output the one with the smallest average distance to all the houses. If such a solution is still not unique, output the one with the smallest index number.

**Input Specification**

Each input file contains one test case. For each case, the first line contains 4 positive integers: $N$ ($\le 10^3$), the total number of houses; $M$ ($\le 10$), the total number of the candidate locations for the gas stations; $K$ ($\le 10^4$), the number of roads connecting the houses and the gas stations; and $D_S$, the maximum service range of the gas station. It is hence assumed that all the houses are numbered from 1 to $N$, and all the candidate locations are numbered from `G`1 to `G`$M$.

Then $K$ lines follow, each describes a road in the format
```
P1 P2 Dist
```
where `P1` and `P2` are the two ends of a road which can be either house numbers or gas station numbers, and `Dist` is the integer length of the road.

**Output Specification**

For each test case, print in the first line the index number of the best location. In the next line, print the minimum and the average distances between the solution and all the houses. The numbers in a line must be separated by a space and be accurate up to 1 decimal place. If the solution does not exist, simply output `No Solution`.

**Sample Input 1**
```plaintext
4 3 11 5
1 2 2
1 4 2
1 G1 4
1 G2 3
2 3 2
2 G2 1
3 4 2
3 G3 2
4 G1 3
G2 G1 1
G3 G2 2
```

**Sample Output 1**
```plaintext
G1
2.0 3.3
```

**Sample Input 2**
```plaintext
2 1 2 10
1 G1 9
2 G1 20
```

**Sample Output 2**
```plaintext
No Solution
```

