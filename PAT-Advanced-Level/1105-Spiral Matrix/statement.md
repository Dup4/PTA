
# 1105 Spiral Matrix

## Statement

!!! info "Metadata"
    作者: CHEN, Yue
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 200 ms
    内存限制: 64 MB

This time your job is to fill a sequence of $$N$$ positive integers into a **spiral matrix** in non-increasing order. A spiral matrix is filled in from the first element at the upper-left corner, then move in a clockwise spiral. The matrix has $$m$$ rows and $$n$$ columns, where $$m$$ and $$n$$ satisfy the following: $$m\times n$$ must be equal to $$N$$; $$m\ge n$$; and $$m-n$$ is the minimum of all the possible values.

### Input Specification:

Each input file contains one test case. For each case, the first line gives a positive integer $$N$$. Then the next line contains $$N$$ positive integers to be filled into the spiral matrix. All the numbers are no more than $$10^4$$. The numbers in a line are separated by spaces.

### Output Specification:

For each test case, output the resulting matrix in $$m$$ lines, each contains $$n$$ numbers. There must be exactly 1 space between two adjacent numbers, and no extra space at the end of each line.

### Sample Input:
```plaintext
12
37 76 20 98 76 42 53 95 60 81 58 93
```

### Sample Output:
```plaintext
98 95 93
42 37 81
53 20 76
58 60 76
```


