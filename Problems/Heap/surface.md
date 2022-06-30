[For Chinese](https://www.luogu.com.cn/problem/P3378)
## Desciption
A progression is given. At first, it is empty. Please complete the following three operations.  
1. A integer $x$ is given. Please add $x$ into the progression.  
2. Output the smallest number in the progression.  
3. Delete the smallest number in the progression(If there the number appears more than once, only delete one of it.).  
## Input Form
The first line includes an integer $n$, representing the number of the operations.  
There are $n$ lines following. Each line represents an operation. At the beginning of the line, there is an integer $op$ representing the type of the operation.  
If $op=1$, there is an integer $x$ following. It represents adding $x$ into the progression.  
If $op=2$, output the smallest number in the progression.  
If $op=3$, delete the smallest number in the progression. If there are multiple minimum numbers, only one of them will be deleted.
## Output Form
For every operation $2$, output an line of an integer as your answer.
## Examples
### Input #1
```
5
1 2
1 5
2
3
2
```
### Output #1
```
2
5
```
## Instructions/Tips
### Data Scale and Agreement
For $30\%$ of the data, $n \le 15$.  
For $70\%$ of the data, $n \le 10^4$.  
For $100\%$ of the data, $1 \le n \le 10^6, 1 \le x \le 2^{31}, op \in \{1,2,3\}$.