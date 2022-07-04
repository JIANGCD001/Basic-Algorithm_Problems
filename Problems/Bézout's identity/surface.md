[For Chinese](https://www.luogu.com.cn/problem/P4549)
## Description
An sequence $A$ including $n$ integers is given. They are marked as $A_1,A_2,A_3,...,A_n$.  
Work out another sequence $X$ including $n$ integers. Let $S=\sum\limits_{i=1}^n A_i \times X_i$. $S$ needed to be $S>0$ and as small as possible.
## Input Form
The first line includes an integer $n$, representing the number of the numbers in the sequence $A$.  
There are $n$ integers in the second line, representing the sequence $A$.
## Output Form
A line of a number. It represents the smallest value of $S$ when $S>0$.
## Examples
### Input #1
```
2
4059 -1782
```
### Output #1
```
99
```
## Instructions/Tips
### Data Scale and Agreement
For $100\%$ of the data, $1 \le n \le 20, |A_i| \le 10^5$, and the numbers in the sequence $A$ will not be completely zero.