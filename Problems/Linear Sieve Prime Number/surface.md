[For Chinese](https://www.luogu.com.cn/problem/P3383)
## Description
As the title, a range $n$ is given, and there are $q$ questions. For each question, output the $k$th smallest number.  
Tip: If you use `cin` to read in, you are advised to use `std::ios::sync_with_sidio(0)` to increase the speed.
## Input Form
The first line includes two integers $n,q$, representing the range and the number of the questions.  
There are $q$ lines following. There is an integer $k$ in each line, representing the query of the $k$th smallest number.
## Output Form
Output $q$ lines. Output an integer in each line as your answer.  
## Examples
### Input #1
```
100 5
1
2
3
4
5
```
### Output #1
```
2
3
5
7
11
```
## Instructions/Tips
### Data Scale and Agreement
For $100\%$ of the data, $n=10^8, 1 \le q \le 10^6$. The prime you will query is promised not to be larger than $n$.