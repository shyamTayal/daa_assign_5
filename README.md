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
```
git clone https://github.com/shyamTayal/daa_assign_5
```

---
### Run the Code

Change directory to the solution folder
```
cd daa_assign_5/Solution/
```

For running the solution code by simple DP algorithm
```
g++ dp_algo.cpp -o dp_algo
./dp_algo
```
For running the solution code by even efficient DP algorithm
```
g++ dp_algo_2.cpp -o dp_algo_2
./dp_algo_2
```
#### Output (by Solution files)
```
************* Running Naive Algorithm **************
Enter the Number of Friends : 7
Total Number of possible ways : 232
****************************************************

*********** Running Efficient Algorithm ************
Enter the Number of Friends : 12
Total Number of possible ways : 140152
****************************************************

********* Running 2nd Efficient Algorithm **********
Enter the Number of Friends : 10
Total Number of possible ways : 9496
****************************************************
```

#### Personalised Initialization Method (optional)
Change Directory to Testing Directory and 
```
cd daa_assign_5/Testing/
g++ input_test_gen.cpp -o inp
./inp
```
Above commands will create two testing files :
- input_testcase_dp.txt (for DP algo testing files)
- input_testcase_naive.txt (for Naive algo testing files)

Above Testing files contain nothing but consecutive numbers from 1 to 200 for DP and 1 to 40 for naive
Because of various limitations of of integer overflow.

---
## Testing
Testing files have already been added so above step can be skipped. To run be in Testing Directory
#### Test Naive Algo
```
g++ naive_testing.cpp -o naive
./naive
# This will create a csv file containing the time complexity analysis data
```
#### Test DP algo 1
```
g++ dp_algo_testing.cpp -o dp_algo
./dp_algo
# This will create an output and a csv file containing the time complexity analysis data
```
#### Test DP algo 2
```
g++ dp_algo_2_testing.cpp -o dp_algo_2
./dp_algo_2
# This will create a csv file containing the time complexity analysis data
```

---
## Theory

Let totalPair(i) denotes the total number of way we can pair "i" student.
Then the given problem can be solved using the given recurrence relation

```totalPair(i)  = totalPair(i-1) + (i-1) * ( totalPair(i-2) )``` 

Using the given relation we can find the answer in exponential time complexity. 
But since there are overlapping subproblems we can use Dynamic Programming to memoize the subproblems 
and reduce the time complexity to linear time complexity. 

### Dynamic Programming
Dynamic Programming is an optimization technique where we  store the overlapping sub-problems that can be used later. It is used to reduce the time complexity of the program.

---
## Analysis
### Time Complexity

In the given recurrence relation :- <br />
```totalPair(i)  = totalPair(i-1) + (i-1) * ( totalPair(i-2) )``` 
or ```T(N) = T(N-1) + kT(N-2)```
We memoize each subproblems. Each sub-problems requires constant time i.e O(1).
Since there are 'n' such sub-problems total time complexity will be linear i.e *O(n)*

### Space Complexity

The total space complexity will be  O(N) <br/>
We need to store the answer of each sub-problems. Since there are 'n' such sub-problems .

We can  reduce the space complexity by only storing the last two sub-problems. 
Resulting in constant space complexity  *O(1)* 

---
## References
- [x] Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein. 
~ Introduction to Algorithms. McGraw-Hill Book Company, Toronto.

- [x] Wikipedia : [Dynamic Programming](https://en.wikipedia.org/wiki/Dynamic_programming )

