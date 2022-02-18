
# 1015 Letter-moving Game

## Statement

!!! info "Metadata"
    - 作者: CAO, Peng
    - 单位: Google
    - 代码长度限制: 16 KB
    - 时间限制: 200 ms
    - 内存限制: 64 MB

Here is a simple intersting letter-moving game. The game starts with 2 strings S and T consist of lower case English letters. S and T contain the same letters but the orders might be different. In other words S can be obtained by shuffling letters in String T. At each step, you can move one arbitrary letter in S either to the beginning or to the end of it. How many steps at least to change S into T?

**Input Specification**

Each input file contains one test case. For each case, the first line contains the string S, and the second line contains the string T. They consist of only the lower case English letters and S can be obtained by shuffling T's letters. The length of S is no larger than 1000.

**Output Specification**

For each case, print in a line the least number of steps to change S into T in the game.

**Sample Input**
```plaintext
iononmrogdg
goodmorning
```

**Sample Output**
```plaintext
8
```

**Sample Solution**
```
(0) starts from iononmrogdg
(1) Move the last g to the beginning: giononmrogd
(2) Move m to the end: giononrogdm
(3) Move the first o to the end: ginonrogdmo
(4) Move r to the end: ginonogdmor
(5) Move the first n to the end: gionogdmorn
(6) Move i to the end: gonogdmorni
(7) Move the first n to the end: googdmornin
(8) Move the second g to the end: goodmorning
```

