
# 1027 Larry and Inversions

## Statement

!!! info "Metadata"
    作者: 曹鹏
    单位: Google
    代码长度限制: 16 KB
    时间限制: 400 ms
    内存限制: 64 MB

Larry just studied the algorithm to count number of inversions. He's very interested in it. He's considering another problem: Given a permutation of integers from 1 to $$n$$, how many inversions it has if we reverse one of its subarray?

Formally speaking, given an integer array $$a$$ (indices are from 0 to $$n-1$$) which contains a permutation of integers from 1 to $$n$$, two elements $$a[i]$$ and $$a[j]$$ form an **inversion** if $$a[i] > a[j]$$ and $$i < j$$.  Your job is to count, for each pair of $$0 \le i \le j < n$$, the number of inversions if we reverse the subarray from $$a[i]$$ to $$a[j]$$.

### Input Specification:

Each input file contains one test case. Each case consists of a positive integer $$n$$ ($$\le 1,000$$) in the first line, and a permutation of integers from 1 to $$n$$ in the second line.  The numbers in a line are separated by a single space.

### Output Specification:

For each test case, output $$n(n + 1) / 2$$ integers in a single line. The results are for reversing subarray indicating by all possible pairs of indices $$0 \le i \le j < n$$ in $$i$$-major order -- that is, the first $$n$$ results are for the reverse of subarrary [0..0], [0..1], ...[0..$$n - 1$$]; the next $$n - 1$$ results are for the reverse of subarry [1..1], [1..2],..., [1..$$n - 1$$] and so on.

All the numbers in a line must be separated by a single space, with no extra space at the beginning or the end of the line.

### Sample Input:
```plaintext
3
2 1 3
```

### Sample Output:
```plaintext
1 0 2 1 2 1
```

**Hint:**

The original array is { 2, 1, 3 }.

- Reversing subarray [0..0] makes { 2, 1, 3 } which has 1 inversion.
- Reversing subarray [0..1] makes { 1, 2, 3 } which has 0 inversion.
- Reversing subarray [0..2] makes { 3, 1, 2 } which has 2 inversions.
- Reversing subarray [1..1] makes { 2, 1, 3 } which has 1 inversion.
- Reversing subarray [1..2] makes { 2, 3, 1 } which has 2 inversions.
- Reversing subarrays [2..2] makes { 2, 1, 3 } which has 1 inversion.


