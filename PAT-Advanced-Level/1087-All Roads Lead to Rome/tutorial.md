题意：

给出一张无向图，给出起点，终点固定，每个点(除了起点)有点权，每条边有边权，找一条最短路径，依次满足如下三个条件：

- 首先满足边权和最小。
- 其次满足路径上经过的所有点的点权和最大。
- 最后满足经过的点数最少。

另外还要求边权和最小的不同路径条数，和上述路径的路径上的点。

> 注意：第三个条件，题目本身给出的实际上点权和的平均值最大。

思路：

老 `Dijkstra` 套路了，只不过转移过程中维护的变量多了点，顺便记录下方案和前驱结点即可。
