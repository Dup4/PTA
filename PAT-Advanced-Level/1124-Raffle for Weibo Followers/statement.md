
# 1124 Raffle for Weibo Followers

## Statement

!!! info "Metadata"
    - 作者: CHEN, Yue
    - 单位: 浙江大学
    - 代码长度限制: 16 KB
    - 时间限制: 400 ms
    - 内存限制: 64 MB

John got a full mark on PAT. He was so happy that he decided to hold a raffle（抽奖） for his followers on Weibo -- that is, he would select winners from every N followers who forwarded his post, and give away gifts. Now you are supposed to help him generate the list of winners.

**Input Specification**

Each input file contains one test case. For each case, the first line gives three positive integers M ($\le$ 1000), N and S, being the total number of forwards, the skip number of winners, and the index of the first winner (the indices start from 1). Then M lines follow, each gives the nickname (a nonempty string of no more than 20 characters, with no white space or return) of a follower who has forwarded John's post.

Note: it is possible that someone would forward more than once, but no one can win more than once. Hence if the current candidate of a winner has won before, we must skip him/her and consider the next one.

**Output Specification**

For each case, print the list of winners in the same order as in the input, each nickname occupies a line. If there is no winner yet, print `Keep going...` instead.

**Sample Input 1**
```plaintext
9 3 2
Imgonnawin!
PickMe
PickMeMeMeee
LookHere
Imgonnawin!
TryAgainAgain
TryAgainAgain
Imgonnawin!
TryAgainAgain
```

**Sample Output 1**
```plaintext
PickMe
Imgonnawin!
TryAgainAgain
```

**Sample Input 2**
```plaintext
2 3 5
Imgonnawin!
PickMe
```

**Sample Output 2**
```plaintext
Keep going...
```

