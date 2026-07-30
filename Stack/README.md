# Stack

## Overview

A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle. Elements are inserted and removed from the **top** of the stack.

---

# Operations

- **Push()** – Insert an element onto the top of the stack.
- **Pop()** – Remove the top element.
- **Peek()/Top()** – Display the top element without removing it.
- **isEmpty()** – Check if the stack is empty.
- **isFull()** – Check if the stack is full (array implementation).

---

# Stack Representation

```text
Top
 ↓
+-----+
| 50  | ← Push
+-----+
| 40  |
+-----+
| 30  |
+-----+
| 20  |
+-----+
| 10  |
+-----+
```

---

# Algorithm

## Push

1. Check if the stack is full.
2. Increment `top`.
3. Insert the new element.

## Pop

1. Check if the stack is empty.
2. Retrieve the top element.
3. Decrement `top`.

---

# Time Complexity

| Operation | Complexity |
|-----------|------------|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| isEmpty | O(1) |
| isFull | O(1) |

---

# Advantages

- Simple and efficient.
- Constant-time insertion and deletion.
- Easy implementation using arrays or linked lists.
- Ideal for managing function calls and expression evaluation.


# Disadvantages

- Fixed size in array implementation.
- Stack overflow if capacity is exceeded.
- Only the top element is accessible.

---

# Applications

- Function call management (Call Stack)
- Expression evaluation
- Parentheses matching
- Undo/Redo operations
- Browser history
- Backtracking algorithms
- Depth-First Search (DFS)

---

# Comparison

| Feature | Stack |
|---------|-------|
| Principle | LIFO (Last In, First Out) |
| Insertion | Push |
| Deletion | Pop |
| Access Point | Top Only |
| Memory | Array or Linked List |
| Time Complexity | O(1) for Push/Pop |

---

# Common Errors

### Stack Overflow

Occurs when attempting to **push** an element into a full stack.

### Stack Underflow

Occurs when attempting to **pop** an element from an empty stack.


---

# Conclusion

A **Stack** is a fundamental linear data structure that follows the **LIFO** principle. It supports efficient insertion and deletion from one end and is widely used in programming for recursion, expression evaluation, backtracking, and memory management.
