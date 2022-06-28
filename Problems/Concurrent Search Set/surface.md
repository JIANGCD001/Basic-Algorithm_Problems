[For Chinese](https://www.luogu.com.cn/problem/P3367)
## Description
As the title says, you have a concurrent search set. You need to finish functions like uniting and searching.
## Input Form
The first line includes two integers $N,M$. They represent that there are $N$ elements and $M$ functions in total.  
Then, there are $M$ lines following. There are three integers $Z_i,X_i,Y_i$ in each line.  
When $Z_i=1$, unite the sets $X_i$ and $Y_i$ belong to.  
When $Z_i=2$, output if $X_i$ and $Y_i$ are in the same set. If yes, output `Y`. Otherwise, output `N`.
## Output Form
For every function which $Z_i=2$, there is an line of output. Every line includes a capital `Y` or `N`.
## Examples
### Input #1
```
4 7
2 1 2
1 1 2
2 1 2
1 3 4
2 1 4
1 2 3
2 1 4
```
### Output #1
```
N
Y
N
Y
```
## Instuctions/Tips
### Data Scale and Agreement
For $30\%$ of the data, $N\le10,M\le20$.  
For $70\%$ of the data, $N\le100,M\le10^3$.  
For $100\%$ of the data, $1\le N\le 10^4,1\le M\le2\times10^5,1\le X_i,Y_i\le N,Z_i\in \{1,2\}$.