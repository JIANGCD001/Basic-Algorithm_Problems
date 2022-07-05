[For Chinese](https://www.luogu.com.cn/problem/P3375)
## Description
Two strings $s_1,s_2$ are given. If the substring in the interval $[l,r]$ of $s_1$ is completely the same as $s_2$, we say $s_2$ appears in $s_1$. The position it appears is $l$. Now, please work out all the positions that $s_2$ appears in $s_1$.  
We also define that the border of a string $s$ is a substring $t$ that **it is not $s$ itself**. It is also the prefix of $s$ and the suffix of $s$. For $s_2$, you also need to work out the longest border $t'$ of each of the prefix $s'$.
## Input Form
There is a string in the first line. It is $s_1$.  
There is a string in the second line. It is $s_2$.
## Output Form
First, output some lines. There is an integer in each line, representing the position $s_2$ appears in $s_1$, **from small to large**.  
The last line should include $|s_2|$ integers. The $i$th integer represents the longest length of the border of the prefix whose length is $i$.
## Examples
### Input #1
```
ABABABC
ABA
```
### Output #1
```
1
3
0 0 1 
```
## Instructions/Tips
### Example Explaination
#### For Example #1
![This is a picture.](https://cdn.luogu.com.cn/upload/pic/2257.png)  
For the prefix `ABA` whose length is $3$ of $s_2$, the string `A` is both the prefix and the suffix of it. It is also the longest. Thus, the longest length of border is $1$. 
### Data Scale and Agreement
**This problem will use subtask to check your answer. There are 3 subtasks.**  
- Subtask 1 (30 points):$|s_1| \le 15, |s_2| \le 5$.  
- Subtask 2 (40 points):$|s_1| \le 10^4, |s_2| \le 10^2$.  
- Subtask 3 (30 points):No such special agreements.

For all the subtasks, the data are promised to be $1 \le |s_1|,|s_2| \le 10^6$, only capital letters will appear in $s_1,s_2$.