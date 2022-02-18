
# 1019 Separate the Animals

## Statement

!!! info "Metadata"
    - 作者: LIU, Rujia
    - 单位: 北京尔宜居科技有限责任公司
    - 代码长度限制: 16 KB
    - 时间限制: 1500 ms
    - 内存限制: 64 MB

There are some animals in a zoo which can be described as a grid with N rows and M columns. Your task is to place some obstacles so that no pairs of animals can reach each other.

Two animals can **reach each other** if and only if their cells are **4-connected**. For example, in Figure 1, the central blue cell can be reached by the four red cells, and cannot be reached by the other four white cells.


![sep1.JPG](~/0eba9ce1-1391-424e-ab2c-2e67cea8a90c.JPG)

Figure 1

What is more, you must put obstacles in exactly K cells, which are 4-connected and form exactly H holes. Here a **hole** is defined as a 4-connected part with finitely many open cells while the zoo is placed in an infinite open grid. For example, there are 2 holes (the green and the yellow areas) in Figure 2.


![sep2.JPG](~/be0f6b32-a181-4ee7-8410-0899291ce154.JPG)

Figure 2

For the following grid with two animals:


![sep3.jpg](~/5265c6d9-1a9a-4ab1-8eb8-f880f8add579.jpg)

Figure 3

If K = 8 and H = 1, one way to separate them is the following:


![sep4.jpg](~/0c3939f3-ba1e-46cd-a677-a9e122fd7202.jpg)

Figure 4

Figure 5 is illegal because it contains no hole.


![sep5.jpg](~/5dbbae27-6155-480a-a7b9-48007deb653c.jpg)

Figure 5

Figure 6 is also illegal because the obstacles are not 4-connected.


![sep6.jpg](~/927e59e8-4c19-4d77-8bc4-df2486228b50.jpg)

Figure 6

Given some animals, you are supposed to count the number of different solutions.

**Input Specification**

Each input file contains one test case. For each case, the first line gives four integers: N, M, K, H (2 $\le$ N, M $\le$ 6; 1 $\le$ K $\le$ 12; 0 $\le$ H $\le$ 2). All the numbers are separated by spaces.

Then N lines follow, each contains M characters, which are either `.` or `O`, representing an open cell or an animal, respectively. There will be at least 2 animals.

**Output Specification**

For each case, print a single line containing a single integer: the number of solutions.

**Sample Input**
```plaintext
3 5 8 1
...O.
.O...
.....
```

**Sample Output**
```plaintext
8
```

