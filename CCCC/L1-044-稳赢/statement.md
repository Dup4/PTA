
# L1-044 稳赢

## Statement

!!! info "Metadata"
    - 作者: 陈越
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：


![](./statement-assets/367)

现要求你编写一个稳赢不输的程序，根据对方的出招，给出对应的赢招。但是！为了不让对方输得太惨，你需要每隔$K$次就让一个平局。

**输入格式**

输入首先在第一行给出正整数$K$（$\le 10$），即平局间隔的次数。随后每行给出对方的一次出招：`ChuiZi`代表“锤子”、`JianDao`代表“剪刀”、`Bu`代表“布”。`End`代表输入结束，这一行不要作为出招处理。

**输出格式**

对每一个输入的出招，按要求输出稳赢或平局的招式。每招占一行。

**输入样例**
```plaintext
2
ChuiZi
JianDao
Bu
JianDao
Bu
ChuiZi
ChuiZi
End
```

**输出样例**
```plaintext
Bu
ChuiZi
Bu
ChuiZi
JianDao
ChuiZi
Bu
```
