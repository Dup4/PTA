
# L3-020 至多删三个字符

## Statement

!!! info "Metadata"
    - 作者: 曹鹏
    - 单位: Google
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

给定一个全部由小写英文字母组成的字符串，允许你至多删掉其中 3 个字符，结果可能有多少种不同的字符串？

**输入格式**

输入在一行中给出全部由小写英文字母组成的、长度在区间 [4, $10^6$] 内的字符串。

**输出格式**

在一行中输出至多删掉其中 3 个字符后不同字符串的个数。

**输入样例**
```plaintext
ababcc
```

**输出样例**
```plaintext
25
```

**提示：**

删掉 0 个字符得到 "ababcc"。

删掉 1 个字符得到 "babcc", "aabcc", "abbcc", "abacc" 和 "ababc"。

删掉 2 个字符得到 "abcc", "bbcc", "bacc", "babc", "aacc", "aabc", "abbc", "abac" 和 "abab"。

删掉 3 个字符得到 "abc", "bcc", "acc", "bbc", "bac", "bab", "aac", "aab", "abb" 和 "aba"。
