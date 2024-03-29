
# 1091 Acute Stroke

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 600 ms
    - 内存限制: 64 MB

One important factor to identify acute stroke (急性脑卒中) is the volume of the stroke core. Given the results of image analysis in which the core regions are identified in each MRI slice, your job is to calculate the volume of the stroke core.

**Input Specification**

Each input file contains one test case. For each case, the first line contains 4 positive integers: $M$, $N$, $L$ and $T$, where $M$ and $N$ are the sizes of each slice (i.e. pixels of a slice are in an $M \times N$ matrix, and the maximum resolution is 1286 by 128); $L$ ($\le 60$) is the number of slices of a brain; and $T$ is the integer threshold (i.e. if the volume of a connected core is less than $T$, then that core must not be counted).

Then $L$ slices are given. Each slice is represented by an $M \times N$ matrix of 0's and 1's, where 1 represents a pixel of stroke, and 0 means normal. Since the thickness of a slice is a constant, we only have to count the number of 1's to obtain the volume. However, there might be several separated core regions in a brain, and only those with their volumes no less than $T$ are counted. Two pixels are **connected** and hence belong to the same region if they share a common side, as shown by Figure 1 where all the 6 red pixels are connected to the blue one.


![figstroke.jpg](./statement-assets/f85c00cc-62ce-41ff-8dd0-d1c288d87409.jpg)


Figure 1

**Output Specification**

For each case, output in a line the total volume of the stroke core.

**Sample Input**
```plaintext
3 4 5 2
1 1 1 1
1 1 1 1
1 1 1 1
0 0 1 1
0 0 1 1
0 0 1 1
1 0 1 1
0 1 0 0
0 0 0 0
1 0 1 1
0 0 0 0
0 0 0 0
0 0 0 1
0 0 0 1
1 0 0 0
```

**Sample Output**
```plaintext
26
```

