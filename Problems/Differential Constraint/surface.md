[For Chinese](https://www.luogu.com.cn/problem/P5960)
## Description
A group of $m$ inwqualities with $n$ unknown numbers is given. It is like:  
$$ \begin{cases} x_{c_1}-x_{c'_1}\leq y_1 \\x_{c_2}-x_{c'_2} \leq y_2 \\ \cdots\\ x_{c_m} - x_{c'_m}\leq y_m\end{cases}$$
Work out one of the solutions.  
## Input Form
The first line includes two integers $n,m$, representing the number of the unknown numbers and the number of the inequalities.  
There are $m$ lines following. Each line includes three integers $c,c',y$, representing an inequality like $x_c-x_{c'} \le y$.
## Output Form
A line with $n$ numbers representing one of the solutions of $x_1,x_2,...,x_n$. If there are more than one solutions, please output one of them. If there are not any solutions, please output `NO`.
## Examples
### Input #1
```
3 3
1 2 3
2 3 -2
1 3 1
```
### Output #1
```
5 3 5
```
## Instructions/Tips
### Example Explaination
#### For Example #1
$$ \begin{cases} x_1-x_2\leq 3 \\x_2-x_3 \leq -2\\ x_1 - x_3\leq 1 \end{cases}$$
One of the solutions is:$x_1=5, x_2=3, x_3=5$.
$$ \begin{cases} 5-3=2 \le 3 \\ 3-5=-2 \le -2 \\ 5-5=0 \le 1 \end{cases}$$
### Data Scale and Agreement
For $100\%$ of the data, $1 \le n,m \le 5 \times 10^3, -10^4 \le y \le 10^4, 1 \le c,c' \le n, c \neq c'$.
### Scoring Strategy
If your answer conforms to the inequality group, you can score. Please make sure your answer is in the range of `int`.

If there is no answer but your program outputs the answer, SPJ will send `There is no answer, but you gave it`. The result will be WA.  
If there is no answer and your program outputs `NO`, SPJ will send `No answer`. The result will be AC.  
If there are answers but your answer is wrong, SPJ will send `Wrong answer`. The result will be WA.  
If there are answers and your answer is correct, SPJ will send `The answer is correct`. The result will be AC.