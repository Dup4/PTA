
# L1-011 A-B

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 150 ms
    - 内存限制: 64 MB

本题要求你计算$A-B$。不过麻烦的是，$A$和$B$都是字符串 —— 即从字符串$A$中把字符串$B$所包含的字符全删掉，剩下的字符组成的就是字符串$A-B$。

**输入格式**

输入在2行中先后给出字符串$A$和$B$。两字符串的长度都不超过$10^4$，并且保证每个字符串都是由可见的ASCII码和空白字符组成，最后以换行符结束。

**输出格式**

在一行中打印出$A-B$的结果字符串。

**输入样例**
```plaintext
I love GPLT!  It's a fun game!
aeiou
```

**输出样例**
```plaintext
I lv GPLT!  It's  fn gm!
```
