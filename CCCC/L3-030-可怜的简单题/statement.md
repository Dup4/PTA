
# L3-030 可怜的简单题

## Statement

!!! info "Metadata"
    - 作者: 吉如一
    - 单位: 北京大学
    - 代码长度限制: 16 KB
    - 时间限制: 10000 ms
    - 内存限制: 512 MB

九条可怜去年出了一道题，导致一众参赛高手惨遭团灭。今年她出了一道简单题 —— 打算按照如下的方式生成一个随机的整数数列 $A$:

1. 最开始，数列 $A$ 为空。

2. 可怜会从区间 $[1,n]$ 中等概率随机一个整数 $i$ 加入到数列 $A$ 中。

3. 如果不存在一个大于 $1$ 的正整数 $w$，满足 $A$ 中所有元素都是 $w$ 的倍数，数组 $A$ 将会作为随机生成的结果返回。否则，可怜将会返回第二步，继续增加 $A$ 的长度。

现在，可怜告诉了你数列 $n$ 的值，她希望你计算返回的数列 $A$ 的期望长度。


**输入格式**

输入一行两个整数 $n, p$ $(1 \le n \le 10^{11}, n < p \le 10^{12})$，$p$ 是一个质数。

**输出格式**

在一行中输出一个整数，表示答案对 $p$ 取模的值。具体来说，假设答案的最简分数表示为 $\frac{x}{y}$，你需要输出最小的非负整数 $z$ 满足 $y \times z \equiv x \text{ mod } p$。

**输入样例 1**
```plaintext
2 998244353
```

**输出样例 1**
```plaintext
2
```

**输入样例 2**
```plaintext
100000000 998244353
```

**输出样例 2**
```plaintext
3056898
```

