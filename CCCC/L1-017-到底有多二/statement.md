
# L1-017 到底有多二

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

一个整数“**犯二的程度**”定义为该数字中包含2的个数与其位数的比值。如果这个数是负数，则程度增加0.5倍；如果还是个偶数，则再增加1倍。例如数字`-13142223336`是个11位数，其中有3个2，并且是负数，也是偶数，则它的犯二程度计算为：$3/11\times 1.5\times 2\times 100\%$，约为81.82%。本题就请你计算一个给定整数到底有多二。

**输入格式**

输入第一行给出一个不超过50位的整数`N`。

**输出格式**

在一行中输出`N`犯二的程度，保留小数点后两位。

**输入样例**
```plaintext
-13142223336
```

**输出样例**
```plaintext
81.82%
```

**鸣谢安阳师范学院段晓云老师和软件工程五班李富龙同学补充测试数据！**
