[For Chinese](https://www.luogu.com.cn/problem/P1886)
## Description
There is an array $a$ whose length is $n$, and a window whose width is $k$. Now, the window starts to move from the left side of the array towards the right side of the array. It moves a unit at a time. Work out the largest number and the smallest number in the window everytime the window moves.  
For example:  
The array is $[1,3,-1,-3,5,3,6,7]$, and $k=3$.  
![This is a picture.](https://cdn.luogu.com.cn/upload/pic/688.png)
## Input Form
There are two lines of input. There are two integers $n,k$ in the first line. The second line includes $n$ numbers, representing the array $a$.
## Output Form
There are two lines of output. The first line includes the largest numbers, and the second line includes the smallest numbers.
## Examples
### Input #1
```
8 3
1 3 -1 -3 5 3 6 7
``` 
### Ouput #1
```
-1 -3 -3 -3 3 3
3 3 5 5 6 7
```
## Instructions/Tips
### Data Scale and Agreement
For $50\%$ of the data, $1 \le n \le 10^5$.  
For $100\%$ of the data, $1 \le k \le n \le 10^6, a_i \in [-2^{31},2^{31})$.