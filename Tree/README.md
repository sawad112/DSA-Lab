# Tree, Binary Search Tree & AVL Tree in C

## Overview

A **Tree** is a non-linear hierarchical data structure consisting of nodes connected by edges.

A tree contains:
- **Root** → The first node of the tree
- **Parent** → A node having child nodes
- **Child** → Node connected below a parent
- **Leaf** → Node with no children
- **Edge** → Connection between two nodes

Example:

```
        A
       / \
      B   C
     / \
    D   E
```

---

# 1. General Tree

A **General Tree** is a tree where a node can have any number of children.

Example:

```
          1
       /  |  \
      2   3   4
     / \
    5   6
```

Features:
- No fixed number of children.
- Used to represent hierarchical data.

Applications:
- File systems
- Organization structures
- XML/HTML documents

---

# Tree Traversal

Tree traversal means visiting every node of a tree.

## 1. Depth First Search (DFS)

### Preorder

```
Root → Left → Right
```

### Inorder

```
Left → Root → Right
```

### Postorder

```
Left → Right → Root
```

---

## 2. Breadth First Search (BFS)

Visits nodes level by level.

Example:

```
1 2 3 4 5
```

---

# 2. Binary Search Tree (BST)

A **Binary Search Tree** is a binary tree where:

```
Left Child < Root < Right Child
```

Example:

```
          50
        /    \
      30      70
     /  \    /  \
   20   40 60   80
```

---

## BST Operations

### Insert

Adds a new node while maintaining BST property.

### Search

Finds an element by comparing values.

### Delete

Removes a node from the tree.

Deletion cases:

1. Node has no child
2. Node has one child
3. Node has two children

---

## BST Complexity

| Operation | Average | Worst |
|-----------|---------|-------|
| Search | O(log n) | O(n) |
| Insert | O(log n) | O(n) |
| Delete | O(log n) | O(n) |

Worst case occurs when the tree becomes skewed.

Example:

```
10
 \
 20
  \
  30
```

---

# 3. AVL Tree

An **AVL Tree** is a self-balancing Binary Search Tree.

It maintains balance after insertion and deletion.

Balance Factor:

```
Balance Factor = Height(Left) - Height(Right)
```

Allowed values:

```
-1, 0, 1
```

---

# AVL Tree Rotations

Rotations are used to balance the tree.

There are four types:

---

## 1. LL Rotation (Right Rotation)

Before:

```
        30
       /
      20
     /
    10
```

After:

```
        20
       /  \
      10   30
```

---

## 2. RR Rotation (Left Rotation)

Before:

```
    10
      \
       20
         \
          30
```

After:

```
        20
       /  \
      10   30
```

---

## 3. LR Rotation

Combination of:

```
Left Rotation + Right Rotation
```

Used when insertion happens in the left subtree of the right child.

---

## 4. RL Rotation

Combination of:

```
Right Rotation + Left Rotation
```

Used when insertion happens in the right subtree of the left child.

---

# AVL Tree Complexity

| Operation | Complexity |
|-----------|------------|
| Search | O(log n) |
| Insert | O(log n) |
| Delete | O(log n) |
| Rotation | O(1) |

---

# Tree vs BST vs AVL

| Feature | Tree | BST | AVL Tree |
|---------|------|-----|----------|
| Type | General Structure | Ordered Binary Tree | Self-Balancing BST |
| Children | Any Number | Maximum 2 | Maximum 2 |
| Ordering | No Rule | Left < Root < Right | Left < Root < Right |
| Balance | Not Required | Not Guaranteed | Always Balanced |
| Search | O(n) | O(log n) Average | O(log n) |

---

# Advantages

## Tree
- Represents hierarchical relationships.
- Flexible structure.

## BST
- Faster searching than normal trees.
- Easy insertion and deletion.

## AVL Tree
- Guaranteed fast searching.
- Prevents skewed trees.
- Maintains O(log n) operations.

---

# Applications

## Tree
- File systems
- Database structure
- HTML/XML parsing

## BST
- Searching systems
- Dictionaries
- Symbol tables

## AVL Tree
- Database indexing
- Memory management
- Searching applications requiring guaranteed performance

---

# Implementation Files

```
Tree
│
├── tree.c
├── bst.c
├── avl_tree.c
└── README.md
```
