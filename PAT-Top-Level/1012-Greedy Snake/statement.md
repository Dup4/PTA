
# 1012 Greedy Snake

## Statement

!!! info "Metadata"
    - 作者: LIU, Rujia
    - 单位: 北京尔宜居科技有限责任公司
    - 代码长度限制: 16 KB
    - 时间限制: 1000 ms
    - 内存限制: 64 MB

Have you ever played the game "Greedy Snake"? In the game, we control the movements of the snake to eat the fruits scattered in the game field, while the snake's body gets longer whenever it eats a fruit. The goal of the game is to make the snake eat as many fruits as possible, before its head has no where to go. It would be a real challenge to let you program this game, right now.


![greedysnake.jpg](./statement-assets/4cca423d-2fb5-4071-9a0a-e675297f4114.jpg)


But hey! Relax! This time you are only asked to program a simplified version of the game. In this simple version, the fruits are all over the place except at some extra obstacle cells. The snake's body will extend all the way along the path while it eats the fruits. You may take any fruit cell as the starting position of the snake. Then you have four directions to choose from: UP, DOWN, LEFT or RIGHT. Once you pick up a direction for the snake, it must keep going until it hits an obstacle or its own body. This procedure repeats until the head of the snake has no where to go -- that is, every adjacent cell of its head is either an obstacle or its own body. Your task is to minimize the number of fruits left.

For example, let's define the game field to be a 6 by 6 maze, surrounded by obstacle cells `#`, with one extra obstacle `@`. `S` is the starting position of the snake. All the fruits are represented by dots.

```
######
#..S@#
#....#
#....#
#....#
######
```
Then if you decide to move DOWN, RIGHT, and UP, the results are shown below.

```
######
#..*@#
#..*.#
#..*.#
#..S.#
######
```
```
######
#..*@#
#..*.#
#..*.#
#..*S#
######
```
```
######
#..*@#
#..*S#
#..**#
#..**#
######
```

Now the snake is stucked, the game is over, and there are 8 fruits left. However, by carefully changing your moves or choosing another starting position, you can actually control the snake to eat up all the fruits. Try it out!

Task 1: minimize the number of fruits left, and count the number of starting positions that can lead to the optimal solution.

Task 2: To make things more interesting, you may replace one fruit cell by an obstacle, to obtain a better result, and count the number of ways to add an obstacle that leads to the better result. In case there is no way to improve the result by adding one obstacle, you should point out this situation.

**Input Specification**

Each input file contains one test case. For each case, the first line contains two integers $N$ ($4 \le N \le 15$), the size of the game field, and $K$ ($0 \le K \le 2$), the number of extra obstacles. Then $K$ lines follow, each gives the coordinates of an obstacle in the format "$x_i$ $y_i$" where $2 \le x_i, y_i \le N-1$.

**Output Specification**

For each case, print the results in two lines. In the first line print the minimal number of fruits left, and the number of different optimal starting positions. Then in the second line, either print $-1$ if there is no way to improve the result, or two integers: the better result and the number of optimal ways to add an obstacle.

**Sample Input 1**
```plaintext
6 1
2 5
```

**Sample Output 1**
```plaintext
0 4
-1
```

**Sample Input 2**
```plaintext
6 2
2 2
3 3
```

**Sample Output 2**
```plaintext
2 1
0 2
```

