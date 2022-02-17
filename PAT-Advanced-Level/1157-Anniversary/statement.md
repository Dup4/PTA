
# 1157 Anniversary

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 800 ms
    内存限制: 64 MB

Zhejiang University is about to celebrate her 122th anniversary in 2019.  To prepare for the celebration, the alumni association （校友会） has gathered the ID's of all her alumni.  Now your job is to write a program to count the number of alumni among all the people who come to the celebration.

### Input Specification:

Each input file contains one test case. For each case, the first part is about the information of all the alumni.  Given in the first line is a positive integer $$N$$ ($$\le 10^5$$).  Then $$N$$ lines follow, each contains an ID number of an alumnus.  An ID number is a string of 18 digits or the letter `X`.  It is guaranteed that all the ID's are distinct.

The next part gives the information of all the people who come to the celebration.  Again given in the first line is a positive integer $$M$$ ($$\le 10^5$$).  Then $$M$$ lines follow, each contains an ID number of a guest.  It is guaranteed that all the ID's are distinct.

### Output Specification:

First print in a line the number of alumni among all the people who come to the celebration.  Then in the second line, print the ID of the oldest alumnus -- notice that the 7th - 14th digits of the ID gives one's birth date.  If no alumnus comes, output the ID of the oldest guest instead.  It is guaranteed that such an alumnus or guest is unique.

### Sample Input:
```plaintext
5
372928196906118710
610481197806202213
440684198612150417
13072819571002001X
150702193604190912
6
530125197901260019
150702193604190912
220221196701020034
610481197806202213
440684198612150417
370205198709275042
```

### Sample Output:
```plaintext
3
150702193604190912
```


