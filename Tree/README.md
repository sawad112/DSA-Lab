# Tree 

## Overview

A **Tree** is a non-linear hierarchical data structure consisting of **nodes** connected by **edges**. The topmost node is called the **root**, and each node may have zero or more child nodes.

---

# Basic Terminology

- **Root** – The first node of the tree.
- **Parent** – A node that has one or more children.
- **Child** – A node connected below a parent.
- **Leaf Node** – A node with no children.
- **Sibling** – Nodes sharing the same parent.
- **Edge** – Connection between two nodes.
- **Level** – Distance from the root.
- **Height** – Longest path from the root to a leaf.

---

# Tree Structure

```text
        A
       / \
      B   C
     / \   \
    D   E   F
```

- Root: A
- Parent: A, B, C
- Leaf Nodes: D, E, F
- Height: 2

---

# Types of Trees

- General Tree
- Binary Tree
- Binary Search Tree (BST)
- AVL Tree
- Heap
- B-Tree

---

# Binary Tree

A **Binary Tree** is a tree in which each node has at most **two children**, called the **left child** and **right child**.

---

# Tree Traversals

## 1. Preorder (Root → Left → Right)

```text
A B D E C F
```

## 2. Inorder (Left → Root → Right)

```text
D B E A C F
```

## 3. Postorder (Left → Right → Root)

```text
D E B F C A
```

## 4. Level Order

```text
A B C D E F
```

---

# Time Complexity

| Operation | Complexity |
|-----------|------------|
| Search | O(n) |
| Insert | O(n) |
| Delete | O(n) |
| Traversal | O(n) |

> **Note:** In a **Binary Search Tree (BST)**, Search, Insert, and Delete take **O(log n)** on average but **O(n)** in the worst case.

---

# Advantages

- Represents hierarchical data efficiently.
- Fast searching and insertion in balanced trees.
- Dynamic memory allocation.
- Supports recursive algorithms.


# Disadvantages

- More memory required due to pointers.
- Unbalanced trees reduce performance.
- Traversal is more complex than linear structures.



# Applications

- File systems
- Database indexing (B-Tree, B+ Tree)
- Expression trees
- Decision trees
- XML/HTML document structure
- Compiler syntax trees
- Artificial Intelligence


# Comparison

| Feature | Tree |
|---------|------|
| Data Structure | Non-linear |
| Root Node | One |
| Children | Zero or More |
| Traversal | DFS, BFS |
| Memory | Dynamic |
| Common Implementation | Linked Nodes |

---


# Conclusion

A **Tree** is a hierarchical, non-linear data structure used to represent relationships between data. It supports efficient storage, searching, and traversal, making it essential in databases, file systems, compilers, and many other computer science applications.
