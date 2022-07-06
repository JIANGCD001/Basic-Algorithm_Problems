[For Chinese](https://www.luogu.com.cn/problem/P3379)
## Description
As the title, a multiple tree is given. Please work out the LCA of the two nodes that the problem gives.
## Input Form
The first line includes three integers $N,M,S$, representing the number of the nodes, the number of the questions and the index of the root.  
There are $n-1$ lines following. Each line includes two integers $x,y$, representing that there is a direct edge connecting node $x$ and node $y$(The data is promised to make a complete tree).  
There are $M$ lines following. Each line includes two integers $a,b$, representing querying the LCA of the node $a$ and the node $b$.
## Output Form
The output needs to includes $M$ lines. Each line includes an integer, representing the result of each of the query.
## Examples
### Input #1
```
5 5 4
3 1
2 4
5 1
1 4
2 4
3 2
3 5
1 2
4 5
```
### Output #1
```
4
4
1
4
4
```
## Instructions/Tips
### Example Explaination
#### For Example #1
The structure of the tree is like this:  
![This is a picture.](https://cdn.luogu.com.cn/upload/pic/2282.png)  
Query 1: the LCA between $2,4$. Thus, it is $4$.  
Query 2: the LCA between $3,2$. Thus, it is $4$.  
Query 3: the LCA between $3,5$. Thus, it is $1$.  
Query 4: the LCA between $1,2$. Thus, it is $4$.  
Query 5: the LCA between $4,5$. Thus, it is $4$.  
Thus, the answer is $4,4,1,4,4$.
### Data Scale and Agreement
For $30\%$ of the data, $N \le 10, M \le 10$.  
For $70\%$ of the data, $N \le 10000, M \le 10000$.  
For $100\%$ of the data, $N \le 500000, M \le 500000$.