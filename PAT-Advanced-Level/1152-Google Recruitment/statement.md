
# 1152 Google Recruitment

## Statement

!!! info "Metadata"
    作者: 陈越
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 200 ms
    内存限制: 64 MB

In July 2004, Google posted on a giant billboard along Highway 101 in Silicon Valley (shown in the picture below) for recruitment. The content is super-simple, a URL consisting of the first 10-digit prime found in consecutive digits of the natural constant $$e$$. The person who could find this prime number could go to the next step in Google's hiring process by visiting this website.

![prime.jpg](~/57148679-d574-4f49-b048-775c6c07791c.jpg)

The natural constant $$e$$ is a well known transcendental number（超越数）. The first several digits are: $$e$$ = 2.71828182845904523536028747135266249775724709369995957496696762772407663035354759457138217852516642**7427466391**932003059921... where the 10 digits in bold are the answer to Google's question.

Now you are asked to solve a more general problem: find the first K-digit prime in consecutive digits of any given L-digit number.

### Input Specification:

Each input file contains one test case. Each case first gives in a line two positive integers: L ($$\le$$ 1,000) and K ($$<$$ 10), which are the numbers of digits of the given number and the prime to be found, respectively. Then the L-digit number N is given in the next line.

### Output Specification:

For each test case, print in a line the first K-digit prime in consecutive digits of N.  If such a number does not exist, output `404` instead.  Note: the leading zeroes must also be counted as part of the K digits.  For example, to find the 4-digit prime in 200236, 0023 is a solution.  However the first digit 2 must not be treated as a solution 0002 since the leading zeroes are not in the original number.

### Sample Input 1:
```plaintext
20 5
23654987725541023819
```

### Sample Output 1:
```plaintext
49877
```

### Sample Input 2:
```plaintext
10 3
2468024680
```

### Sample Output 2:
```plaintext
404
```


