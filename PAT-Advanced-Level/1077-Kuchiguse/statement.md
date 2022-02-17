
# 1077 Kuchiguse

## Statement

!!! info "Metadata"
    作者: HOU, Qiming
    单位: 浙江大学
    代码长度限制: 16 KB
    时间限制: 150 ms
    内存限制: 64 MB

The Japanese language is notorious for its sentence ending particles. Personal preference of such particles can be considered as a reflection of the speaker's personality. Such a preference is called "Kuchiguse" and is often exaggerated artistically in Anime and Manga. For example, the artificial sentence ending particle "nyan~" is often used as a stereotype for characters with a cat-like personality:

- Itai nyan~ (It hurts, nyan~)

- Ninjin wa iyada nyan~ (I hate carrots, nyan~)

Now given a few lines spoken by the same character, can you find her Kuchiguse?

### Input Specification:

Each input file contains one test case. For each case, the first line is an integer $$N$$ ($$2\le N\le 100$$). Following are $$N$$ file lines of 0~256 (inclusive) characters in length, each representing a character's spoken line. The spoken lines are case sensitive.

### Output Specification:

For each test case, print in one line the kuchiguse of the character, i.e., the longest common suffix of all $$N$$ lines. If there is no such suffix, write `nai`.

### Sample Input 1:
```plaintext
3
Itai nyan~
Ninjin wa iyadanyan~
uhhh nyan~
```

### Sample Output 1:
```plaintext
nyan~
```

### Sample Input 2:
```plaintext
3
Itai!
Ninjinnwaiyada T_T
T_T
```

### Sample Output 2:
```plaintext
nai
```



