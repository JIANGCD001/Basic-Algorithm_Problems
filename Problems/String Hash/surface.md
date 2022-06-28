[For Chinese](https://www.luogu.com.cn/problem/P3370)
## Description
As the title says, $N$ strings are given(The length of the $i$th string is $M_i$. The strings may include numbers, upper and lower case letters. Also, the strings are case sensitive.). Please work out how many different strings there are in the $N$ strings.
## Input Form
The first line includes an integer $N$, representing the number of the strings.  
There is an string in each following line.
## Output Form
Your output has to be an line, including a string. It represents the number of the different strings.
## Examples
### Input #1
```
5
abc
aaaa
abc
abcc
12345
```
### Output #1
```
4
```
## Instructions/Tips
### Example Explainations
The first string(`abc`) is as same as the third string(`abc`). Thus, the set of the provided strings is $\{$`aaaa`,`abc`,`abcc`,`12345`$\}$. So, there are $4$ different strings.
### Data Scale and Agreement
For $30\%$ of the data, $N\le10,M_i\approx6,M_{max}\le15$.  
For $70\%$ of the data, $N\le1000,M_i\approx100,M_{max}\le 150$.  
For $100\%$ of the data, $N\le10000,M_i\approx1000,M_{max}\le1500$.