## What is the Big O notation?

Big O notation is used in Computer Science to describe the performance or complexity of an algorithm. Big O specifically describes the worst-case scenario and can be used to describe the execution time required or the space used (e.g. in memory or on disk) by an algorithm.

### :boom: O(1) - Constant Running Time

O(1) describes an algorithm that will always execute in the same time (or space) regardless of the size of the input data set.

### :boom: O(log N) - Logarithmic Running Time

Logarithmic O(log N) — narrows down the search by repeatedly halving the dataset until you find the target value.
Using binary search — which is a form of logarithmic algorithm, finds the median in the array and compares it to the target value. The algorithm will traverse either upwards or downwards depending on the target value being higher than, lower than or equal to the median.

### :boom: O(N) - Linear Running Time

O(N) describes an algorithm whose performance will grow linearly and in direct proportion to the size of the input data set. 
The example below also demonstrates how Big O favours the worst-case performance scenario; 
a matching string could be found during any iteration of the for loop and the function would return early, 
but Big O notation will always assume the upper limit where the algorithm will perform the maximum number of iterations.


O( N (log N) ) - Quasilinear time/ log-linear / Linearithmic Time.
This is the time complexity of divide and conquer sorting algorithms.


In O(N log N), N is the input size (or number of elements).


log N is actually logarithm to the base 2
In divide and conquer approach, we divide the problem into sub problems(divide) and solve 
them separately and then combine the solutions(conquer).
