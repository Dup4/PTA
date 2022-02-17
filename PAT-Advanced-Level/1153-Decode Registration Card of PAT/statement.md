
# 1153 Decode Registration Card of PAT

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 200 ms
    内存限制: 64 MB

A registration card number of PAT consists of 4 parts:

- the 1st letter represents the test level, namely, `T` for the top level, `A` for advance and `B` for basic;
- the 2nd - 4th digits are the test site number, ranged from 101 to 999;
- the 5th - 10th digits give the test date, in the form of `yymmdd`;
- finally the 11th - 13th digits are the testee's number, ranged from 000 to 999.

Now given a set of registration card numbers and the scores of the card owners, you are supposed to output the various statistics according to the given queries.

### Input Specification:

Each input file contains one test case. For each case, the first line gives two positive integers $$N$$ ($$\le 10^4$$) and $$M$$ ($$\le 100$$), the numbers of cards and the queries, respectively.

Then $$N$$ lines follow, each gives a card number and the owner's score (integer in $$[0, 100]$$), separated by a space.

After the info of testees, there are $$M$$ lines, each gives a query in the format `Type Term`, where

- `Type` being 1 means to output all the testees on a given level, in non-increasing order of their scores. The corresponding `Term` will be the letter which specifies the level;
- `Type` being 2 means to output the total number of testees together with their total scores in a given site. The corresponding `Term` will then be the site number;
- `Type` being 3 means to output the total number of testees of every site for a given test date.  The corresponding `Term` will then be the date, given in the same format as in the registration card.

### Output Specification:

For each query, first print in a line `Case #: input`, where `#` is the index of the query case, starting from 1; and `input` is a copy of the corresponding input query.  Then output as requested:

- for a type 1 query, the output format is the same as in input, that is, `CardNumber Score`.  If there is a tie of the scores, output in increasing alphabetical order of their card numbers (uniqueness of the card numbers is guaranteed);
- for a type 2 query, output in the format `Nt Ns` where `Nt` is the total number of testees and `Ns` is their total score;
- for a type 3 query, output in the format `Site Nt` where `Site` is the site number and `Nt` is the total number of testees at `Site`.  The output must be in non-increasing order of `Nt`'s, or in increasing order of site numbers if there is a tie of `Nt`.

If the result of a query is empty, simply print `NA`.

### Sample Input:
```plaintext
8 4
B123180908127 99
B102180908003 86
A112180318002 98
T107150310127 62
A107180908108 100
T123180908010 78
B112160918035 88
A107180908021 98
1 A
2 107
3 180908
2 999
```

### Sample Output:
```plaintext
Case 1: 1 A
A107180908108 100
A107180908021 98
A112180318002 98
Case 2: 2 107
3 260
Case 3: 3 180908
107 2
123 2
102 1
Case 4: 2 999
NA
```


