
# 1069 微博转发抽奖

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

小明 PAT 考了满分，高兴之余决定发起微博转发抽奖活动，从转发的网友中按顺序每隔 N 个人就发出一个红包。请你编写程序帮助他确定中奖名单。

**输入格式**

输入第一行给出三个正整数 M（$\le$ 1000）、N 和 S，分别是转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号（编号从 1 开始）。随后 M 行，顺序给出转发微博的网友的昵称（不超过 20 个字符、不包含空格回车的非空字符串）。

注意：可能有人转发多次，但不能中奖多次。所以如果处于当前中奖位置的网友已经中过奖，则跳过他顺次取下一位。

**输出格式**

按照输入的顺序输出中奖名单，每个昵称占一行。如果没有人中奖，则输出 `Keep going...`。

**输入样例 1**
```plaintext
9 3 2
Imgonnawin!
PickMe
PickMe
LookHere
Imgonnawin!
TryAgainAgain
TryAgainAgain
Imgonnawin!
TryAgainAgain

```

**输出样例 1**
```plaintext
PickMe
Imgonnawin!
TryAgainAgain

```

**输入样例 2**
```plaintext
2 3 5
Imgonnawin!
PickMe

```

**输出样例 2**
```plaintext
Keep going...

```

**鸣谢用户 谢成星 补充数据！**
