
# 1095 Cars on Campus

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 300 ms
    - 内存限制: 64 MB

Zhejiang University has 8 campuses and a lot of gates.  From each gate we can collect the in/out times and the plate numbers of the cars crossing the gate.  Now with all the information available, you are supposed to tell, at any specific time point, the number of cars parking on campus, and at the end of the day find the cars that have parked for the longest time period.

**Input Specification**

Each input file contains one test case.  Each case starts with two positive integers $N$ ($\le 10^4$), the number of records, and $K$ ($\le 8\times 10^4$) the number of queries.  Then $N$ lines follow, each gives a record in the format:

```
plate_number hh:mm:ss status
```

where `plate_number` is a string of 7 English capital letters or 1-digit numbers; `hh:mm:ss` represents the time point in a day by hour:minute:second, with the earliest time being `00:00:00` and the latest `23:59:59`; and `status` is either `in` or `out`.

Note that all times will be within a single day. Each `in` record is paired with the chronologically next record for the same car provided it is an `out` record. Any `in` records that are not paired with an `out` record are ignored, as are `out` records not paired with an `in` record. It is guaranteed that at least one car is well paired in the input, and no car is both `in` and `out` at the same moment. Times are recorded using a 24-hour clock.

Then $K$ lines of queries follow, each gives a time point in the format `hh:mm:ss`.  Note: the queries are given in **ascending** order of the times.

**Output Specification**

For each query, output in a line the total number of cars parking on campus.  The last line of output is supposed to give the plate number of the car that has parked for the longest time period, and the corresponding time length.  If such a car is not unique, then output all of their plate numbers in a line in alphabetical order, separated by a space.

**Sample Input**
```plaintext
16 7
JH007BD 18:00:01 in
ZD00001 11:30:08 out
DB8888A 13:00:00 out
ZA3Q625 23:59:50 out
ZA133CH 10:23:00 in
ZD00001 04:09:59 in
JH007BD 05:09:59 in
ZA3Q625 11:42:01 out
JH007BD 05:10:33 in
ZA3Q625 06:30:50 in
JH007BD 12:23:42 out
ZA3Q625 23:55:00 in
JH007BD 12:24:23 out
ZA133CH 17:11:22 out
JH007BD 18:07:01 out
DB8888A 06:30:50 in
05:10:00
06:30:50
11:00:00
12:23:42
14:00:00
18:00:00
23:59:00
```

**Sample Output**
```plaintext
1
4
5
2
1
0
1
JH007BD ZD00001 07:20:09
```
