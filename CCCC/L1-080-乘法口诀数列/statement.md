
# L1-080 乘法口诀数列

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

本题要求你从任意给定的两个 1 位数字 $a_1$ 和 $a_2$ 开始，用乘法口诀生成一个数列 {$a_n$}，规则为从 $a_1$ 开始顺次进行，每次将当前数字与后面一个数字相乘，将结果贴在数列末尾。如果结果不是 1 位数，则其每一位都应成为数列的一项。

**输入格式**

输入在一行中给出 3 个整数，依次为 $a_1$、$a_2$ 和 $n$，满足 $0\le a_1,a_2\le 9$，$0<n\le 10^3$。

**输出格式**

在一行中输出数列的前 $n$ 项。数字间以 1 个空格分隔，行首尾不得有多余空格。

**输入样例**
```plaintext
2 3 10
```

**输出样例**
```plaintext
2 3 6 1 8 6 8 4 8 4
```

**样例解释**

数列前 2 项为 2 和 3。从 2 开始，因为 $2\times 3=6$，所以第 3 项是 6。因为 $3\times 6=18$，所以第 4、5 项分别是 1、8。依次类推…… 最后因为第 6 项有 $6\times 8=48$，对应第 10、11 项应该是 4、8。而因为只要求输出前 10 项，所以在输出 4 后结束。
