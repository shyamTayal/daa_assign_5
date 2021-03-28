# Assignment - 2

*Team Members*
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019007  |   Aditya Raj | Adityahulk |
|    IIB2019008  |   Shyam Tayal | shyamTayal |
|    IIB2019009  |   Abhijeet Sonkar | Abhijeet-sonkar |


*Group No-*"22"

*Faculty Name-*"Dr. Rahul Kala"

*Mentor Name-* "Md. Meraz"

---
## Problem Statement
Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up. Solve using Dynamic programming.

---
## How to use code
First Step is to Download/clone the repository

git clone https://github.com/shyamTayal/daa_assign_5

<!-- #### Personalised Initialization Method (optional)
-->

---
### Run the Code

Change directory to the solution folder
```
cd daa_assign_5/Solution/

```

For running the solution code 
```
g++ dp_algo.cpp -o dp_algo
./dp_algo

```
#### Output (Sample)

```
Enter the Number of Friends :  5
Total Number of possible ways 26

```

---
### Testing


---
## Theory

Let totalPair(i) denotes the total number of way we can pair "i" student.<br/><br/>
Then the given problem can be solved using the given recurrence relation<br/>

```totalPair(i)  = totalPair(i-1) + (i-1) * ( totalPair(i-2) )``` <br/>

Using the given relation we can find the answer in exponential time complexity. <br/>
But since there are overlapping subproblems we can use Dynamic Programming to memoize the subproblems<br/>
and reduce the time complexity to linear time complexity. <br/>

### Dynamic Programming
Dynamic Programming is an optimization technique where we  store the overlapping sub-problems that can be used later.<br/>
It is used to reduce the time complexity of the program.<br/>

---
## Analysis
### Time Complexity
In the given recurrence relation :- <br/><br/>
```totalPair(i)  = totalPair(i-1) + (i-1) * ( totalPair(i-2) )``` <br/><br/>
We memoize each subproblems .<br/>
Each sub-problems requires constant time O(1) to solve the problems.<br/>
Since there are 'n' such sub-problems total time complexity will be :- O(n)  <br/>

### Space Complexity
We need to store the answer of each sub-problems.<br/>
Since there are 'n' such sub-problems the total time complexity will be :- O(n) <br/>

We can  reduce the space complexity by only storing the last two sub-problems <br/>
Resulting in constant space complexity :- O(1) <br/>

---
## References
[1] Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford 
Stein. Introduction to Algorithms. McGraw-Hill Book Company, Toronto.<br/>
[2] Wikipedia: Dynamic Programming,
https://en.wikipedia.org/wiki/Dynamic_programming <br/>

