# Recursion 

## Overview

**Recursion** is a programming technique in which a function calls itself to solve a problem by breaking it into smaller subproblems. Every recursive function must have a **base case** to stop further recursive calls.

## Syntax

```c
return_type function_name(parameters)
{
    if (base_condition)
        return value;

    return function_name(smaller_problem);
}
```



## Components

- **Base Case** – Terminates recursion.
- **Recursive Case** – Function calls itself with a smaller input.
- **Call Stack** – Stores each recursive function call until execution returns.


## Advantages

- Simple and readable code.
- Suitable for divide-and-conquer algorithms.
- Useful for tree and graph traversal.
- Reduces code complexity for recursive problems.



## Disadvantages

- Higher memory usage due to the call stack.
- Slower than iteration for simple tasks.
- May cause **stack overflow** if recursion is too deep.
- Requires a correct base case to avoid infinite recursion.


## Applications

- Factorial calculation
- Fibonacci sequence
- Binary Search
- Tower of Hanoi
- Tree Traversal
- Graph Traversal (DFS)
- Backtracking algorithms


## Time Complexity

| Problem | Time Complexity |
|---------|-----------------|
| Factorial | O(n) |
| Recursive Sum | O(n) |
| Fibonacci (Naive) | O(2ⁿ) |
| Binary Search | O(log n) |


## Recursion vs Iteration

| Feature | Recursion | Iteration |
|---------|-----------|-----------|
| Uses Function Calls | Yes | No |
| Memory Usage | Higher | Lower |
| Execution Speed | Slower | Faster |
| Stack Required | Yes | No |
| Code Simplicity | Better for recursive problems | Better for simple loops |


## Best Practices

- Always define a valid **base case**.
- Ensure each recursive call moves toward the base case.
- Avoid unnecessary recursive calls.
- Use iteration when recursion adds unnecessary overhead.
- Optimize expensive recursion using memorization or dynamic programming when applicable.


## Conclusion

Recursion is a powerful technique for solving problems that can be divided into smaller, similar subproblems. While it simplifies many algorithms, it should be used carefully to avoid excessive memory usage and stack overflow.
