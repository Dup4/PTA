
# 1109 Group Photo

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

Formation is very important when taking a group photo. Given the rules of forming $K$ rows with $N$ people as the following:

- The number of people in each row must be $N/K$ (round down to the nearest integer), with all the extra people (if any) standing in the last row;

- All the people in the rear row must be no shorter than anyone standing in the front rows;

- In each row, the tallest one stands at the central position (which is defined to be the position $(m/2+1)$, where $m$ is the total number of people in that row, and the division result must be rounded down to the nearest integer);

- In each row, other people must enter the row in non-increasing order of their heights, alternately taking their positions first to the right and then to the left of the tallest one (For example, given five people with their heights 190, 188, 186, 175, and 170, the final formation would be 175, 188, 190, 186, and 170. Here we assume that you are facing the group so your left-hand side is the right-hand side of the one at the central position.);

- When there are many people having the same height, they must be ordered in alphabetical (increasing) order of their names, and it is guaranteed that there is no duplication of names.

Now given the information of a group of people, you are supposed to write a program to output their formation.

**Input Specification**

Each input file contains one test case. For each test case, the first line contains two positive integers $N$ ($\le 10^4$), the total number of people, and $K$ ($\le 10$), the total number of rows. Then $N$ lines follow, each gives the name of a person (no more than 8 English letters without space) and his/her height (an integer in [30, 300]).

**Output Specification**

For each case, print the formation -- that is, print the names of people in $K$ lines. The names must be separated by exactly one space, but there must be no extra space at the end of each line. Note: since you are facing the group, people in the rear rows must be printed above the people in the front rows.

**Sample Input**
```plaintext
10 3
Tom 188
Mike 170
Eva 168
Tim 160
Joe 190
Ann 168
Bob 175
Nick 186
Amy 160
John 159
```

**Sample Output**
```plaintext
Bob Tom Joe Nick
Ann Mike Eva
Tim Amy John
```

