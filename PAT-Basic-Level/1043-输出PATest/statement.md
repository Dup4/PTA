
# 1043 输出PATest

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

给定一个长度不超过 $10^4$ 的、仅由英文字母构成的字符串。请将字符重新调整顺序，按 `PATestPATest....` 这样的顺序输出，并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按 PATest 的顺序打印，直到所有字符都被输出。

**输入格式**

输入在一行中给出一个长度不超过 $10^4$ 的、仅由英文字母构成的非空字符串。

**输出格式**

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

**输入样例**
```plaintext
redlesPayBestPATTopTeePHPereatitAPPT
```

**输出样例**
```plaintext
PATestPATestPTetPTePePee
```

