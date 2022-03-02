思路：

$dp[i][j]$ 表示前 $i$ 个硬币能否凑出 $j$ 元钱，转移有：

$$
\begin{eqnarray*}
dp[i][j] &= dp[i - 1][j - arr[i]]
\end{eqnarray*}
$$

最后输出答案序列的时候，先排个序，然后根据已经转移好的 $dp$ 数组暴搜即可。
