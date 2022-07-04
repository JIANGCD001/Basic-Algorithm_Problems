[For Chinese](https://www.luogu.com.cn/problem/P3865)
## Description
A sequence whose length is $N$ is given. Also, $M$ questions are given. For each question, work out the maximum value of the numbers in the interval.  
If you want to run your program faster, try to use quick reading to read in:  
```cpp
inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while (ch<'0'||ch>'9')
    {
        if (ch=='-')
        {
            f=-1;
            ch=getchar();
        }
    }
    while (ch>='0'&&ch<='9')
    {
        x=x*10+ch-48;
        ch=getchar();
    }
    return x*f;
}
```
## Input Form
The first line includes two integers $N,M$, representing the number of the numbers in the sequence and the number of the questions.  
The second line includes $N$ integers (marked as $a_i$), representing the $i$th element in the sequence.  
There are $M$ lines following. Each line includes two integers $l_i,r_i$, representing the interval which will be searched is $[l_i,r_i]$.
## Output Form
Your output needs to include $M$ lines. Each line includes an integer, representing the result of every searching.
## Examples
### Input #1
```
8 8
9 3 1 7 5 6 0 8
1 6
1 5
2 7
2 6
1 8
4 8
3 7
1 8
```
### Output #1
```
9
9
7
7
9
8
7
9
```
## Instructions/Tips
### Data Scale and Agreement
For $30\%$ of the data, $1 \le N,M \le 10$.  
For $70\%$ of the data, $1 \le N,M \le 10^5$.  
For $100\%$ of the data, $1 \le N \le 10^5, 1 \le M \le 2 \times 10^5, a_i \in [0,10^9], 1 \le l_i \le r_i \le N$.