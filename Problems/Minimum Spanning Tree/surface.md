[For Chinese](https://www.luogu.com.cn/problem/P3366)
## Describe
As the title, an undirected graph is given. Work out the minimum spanning tree of it. If this graph is not connected, output `orz`.
## Input Form
There are two integers in the first line, representing $N,M$. They tell that this graph has $N$ nodes and $M$ lines.  
There are $M$ lines following. There are three integers $X_i,Y_i,Z_i$ in each line. They tell that there is a $Z_i$-long undirected line connecting node $X_i$ and node $Y_i$.
## Output Form
If this graph is connected, output an integer representing the sum of each line in the minimum spanning tree of the graph. Otherwise, output `orz`.
## Examples
### Input #1
```
4 5
1 2 2
1 3 2
1 4 3
2 3 4
3 4 3
```
### Output #1
```
7
```
## Instructions/Tips
### Example Explaination
![Oops!](https://cdn.luogu.com.cn/upload/pic/2259.png)
Thus, the answer is $2+2+3=7$.
### Data Scale and Agreement
For $20\%$ of the data, $N\le5,M\le20$.  
For $40\%$ of the data, $N\le50,M\le2500$.  
For $70\%$ of the data, $N\le500,M\le10^4$.  
For $100\%$ of the data, $1\le N\le5000,1\le M\le22\times10^5,1\le Z_i\le10^4$.