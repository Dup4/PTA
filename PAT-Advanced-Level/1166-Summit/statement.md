
# 1166 Summit

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

A **summit** (峰会) is a meeting of heads of state or government.  Arranging the rest areas for the summit is not a simple job.  The ideal arrangement of one area is to invite those heads so that everyone is a direct friend of everyone.

Now given a set of tentative arrangements, your job is to tell the organizers whether or not each area is all set.

**Input Specification**

Each input file contains one test case. For each case, the first line gives two positive integers N ($\le$ 200), the number of heads in the summit, and M, the number of friendship relations. Then M lines follow, each gives a pair of indices of the heads who are friends to each other. The heads are indexed from 1 to N.

Then there is another positive integer K ($\le$ 100), and K lines of tentative arrangement of rest areas follow, each first gives a positive number L ($\le$ N), then followed by a sequence of L distinct indices of the heads. All the numbers in a line are separated by a space.

**Output Specification**

For each of the K areas, print in a line your advice in the following format:

- if in this area everyone is a direct friend of everyone, and no friend is missing (that is, no one else is a direct friend of everyone in this area), print `Area X is OK.`.

- if in this area everyone is a direct friend of everyone, yet there are some other heads who may also be invited without breaking the ideal arrangement, print `Area X may invite more people, such as H.` where `H` is the smallest index of the head who may be invited.

- if in this area the arrangement is not an ideal one, then print `Area X needs help.` so the host can provide some special service to help the heads get to know each other.

Here `X` is the index of an area, starting from 1 to `K`.

**Sample Input**
```plaintext
8 10
5 6
7 8
6 4
3 6
4 5
2 3
8 2
2 7
5 3
3 4
6
4 5 4 3 6
3 2 8 7
2 2 3
1 1
2 4 6
3 3 2 1
```

**Sample Output**
```plaintext
Area 1 is OK.
Area 2 is OK.
Area 3 is OK.
Area 4 is OK.
Area 5 may invite more people, such as 3.
Area 6 needs help.
```

