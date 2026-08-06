# Heap in C

## Overview

A **Heap** is a complete binary tree-based data structure that follows a special rule called the **Heap Property**.

Heap is mainly used for:
- Priority Queue
- Heap Sort
- Graph Algorithms

A heap is usually implemented using an **array** instead of a tree structure.

---

# Types of Heap

## 1. Max Heap

In a Max Heap, the parent node is always greater than or equal to its children.

Example:

```
        90
       /  \
      50   70
     / \
    20  30
```

Condition:

```
Parent >= Child
```

The largest element is always present at the root.

---

## 2. Min Heap

In a Min Heap, the parent node is always smaller than or equal to its children.

Example:

```
        10
       /  \
      20   30
     / \
    40  50
```

Condition:

```
Parent <= Child
```

The smallest element is always present at the root.

---

# Heap Representation

Heap can be represented using an array.

Example:

```
        50
       /  \
      30   40
```

Array representation:

```
Index:  0   1   2
Value: 50  30  40
```

For a node at index `i`:

```
Parent = (i-1)/2

Left Child = 2*i + 1

Right Child = 2*i + 2
```

---

# Heap Operations

## 1. Insert

Insertion adds a new element at the end of the heap and moves it upward to maintain the heap property.

Steps:

1. Add element at the end.
2. Compare with parent.
3. Swap if heap property is violated.

Time Complexity:

```
O(log n)
```

---

## 2. Delete

Deletion removes the root element from the heap.

Steps:

1. Remove root.
2. Replace root with the last element.
3. Heapify downward.

Time Complexity:

```
O(log n)
```

---

## 3. Heapify

Heapify is the process of rearranging elements to maintain heap property.

Types:

- Heapify Up
- Heapify Down

Time Complexity:

```
O(log n)
```

---

# Heap Sort

Heap Sort is a sorting algorithm that uses a heap data structure.

Steps:

1. Build a Max Heap.
2. Swap the root element with the last element.
3. Reduce heap size.
4. Heapify the root again.
5. Repeat until sorted.

Example:

Before:

```
[5, 3, 8, 1, 2]
```

Max Heap:

```
        8
       / \
      3   5
     / \
    1   2
```

Sorted Array:

```
[1, 2, 3, 5, 8]
```

Time Complexity:

```
O(n log n)
```

Space Complexity:

```
O(1)
```

---

# Heap vs Heap Sort

| Feature | Heap | Heap Sort |
|---------|------|-----------|
| Type | Data Structure | Sorting Algorithm |
| Purpose | Store data efficiently | Sort data |
| Operations | Insert, Delete, Heapify | Build Heap and Extract |
| Output | Heap Structure | Sorted Array |

---

# Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| Insert | O(log n) |
| Delete | O(log n) |
| Search | O(n) |
| Heapify | O(log n) |
| Build Heap | O(n) |
| Heap Sort | O(n log n) |

---

# Advantages

- Efficient priority queue implementation.
- Fast insertion and deletion.
- Uses less memory compared to tree-based implementations.
- Heap Sort provides guaranteed O(n log n) performance.

---

# Disadvantages

- Searching is slow compared to Binary Search Tree.
- More complex than simple arrays.
- Does not support fast searching of arbitrary elements.

---

# Applications

- Priority Queue
- CPU Scheduling
- Dijkstra's Algorithm
- Prim's Algorithm
- Heap Sort
- Data Stream Processing
- Memory Management

---

# Implementation Files

```
Heap
│
├── max_heap.c
├── min_heap.c
├── heap_sort.c
└── README.md
```
