# Linked List in C

## Overview

A **Linked List** is a linear data structure where elements are stored in **nodes**. Each node contains data and a pointer that stores the address of the next node.

Unlike arrays, linked lists do not require contiguous memory locations and can grow or shrink dynamically.

---

# Node Structure

```c
struct Node {
    int data;
    struct Node *next;
};
```

Each node contains:

- **Data** – Stores the value.
- **Next Pointer** – Stores the address of the next node.

---

# Types of Linked Lists

## 1. Singly Linked List

Each node points to the next node only.

```text
Head
 ↓
+----+----+    +----+----+    +----+----+
| 10 |  • | -> | 20 |  • | -> | 30 |NULL|
+----+----+    +----+----+    +----+----+
```

---

## 2. Doubly Linked List

Each node contains pointers to both previous and next nodes.

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

---

## 3. Circular Linked List

The last node points back to the first node.

```text
10 -> 20 -> 30
↑           |
|___________|
```

---

# Basic Operations

## Insertion

Adding a new node into the list.

Types:
- Insert at beginning
- Insert at end
- Insert at a specific position

---

## Deletion

Removing a node from the list.

Types:
- Delete from beginning
- Delete from end
- Delete a specific node

---

## Traversal

Visiting each node sequentially to access data.

Example:

```text
10 -> 20 -> 30 -> NULL
```

Output:

```text
10 20 30
```

---

# Time Complexity

| Operation | Singly Linked List |
|-----------|-------------------|
| Access | O(n) |
| Search | O(n) |
| Insert at Beginning | O(1) |
| Insert at End | O(n) |
| Delete at Beginning | O(1) |
| Delete at End | O(n) |

---

# Advantages

- Dynamic memory allocation.
- Efficient insertion and deletion.
- No fixed size limitation.
- Better memory utilization compared to static arrays.

---

# Disadvantages

- Extra memory required for pointers.
- Sequential access only.
- Searching is slower compared to arrays.
- Pointer management increases complexity.

---

# Applications

- Implementing stacks and queues.
- Music playlists.
- Browser history.
- Memory management.
- Graph adjacency lists.
- Undo/Redo functionality.

---

# Linked List vs Array

| Feature | Array | Linked List |
|---------|-------|-------------|
| Memory | Contiguous | Non-contiguous |
| Size | Fixed | Dynamic |
| Access | O(1) | O(n) |
| Insertion | Slow | Fast |
| Deletion | Slow | Fast |
| Extra Memory | No | Pointer required |

---

# Header Files

```c
#include <stdio.h>
#include <stdlib.h>
```

---

# Conclusion

A **Linked List** is a flexible dynamic data structure that allows efficient insertion and deletion through pointer-based connections. It is widely used in implementing complex data structures such as stacks, queues, graphs, and memory management systems.