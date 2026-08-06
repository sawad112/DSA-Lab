# BFS and DFS in C

## Overview

BFS (Breadth First Search) and DFS (Depth First Search) are graph traversal algorithms used to visit all vertices of a graph.

A graph consists of:
- Vertices (Nodes)
- Edges (Connections)

Example:

```
        0
       / \
      1   2
      |
      3
```

---

# Breadth First Search (BFS)

BFS is a graph traversal algorithm that visits nodes level by level.

It uses a **Queue** data structure.

Example:

```
Graph:

        0
       / \
      1   2
      |
      3

BFS Traversal:

0 -> 1 -> 2 -> 3
```

## BFS Algorithm

1. Start from a source node.
2. Mark the node as visited.
3. Insert the node into the queue.
4. Remove a node from the queue.
5. Visit all unvisited adjacent nodes.
6. Add them to the queue.
7. Repeat until the queue is empty.

## BFS Complexity

| Operation | Complexity |
|-----------|------------|
| Time Complexity | O(V + E) |
| Space Complexity | O(V) |

---

# Depth First Search (DFS)

DFS is a graph traversal algorithm that explores nodes by going as deep as possible before backtracking.

It uses:
- Stack
- Recursion

Example:

```
Graph:

        0
       / \
      1   2
      |
      3

DFS Traversal:

0 -> 1 -> 3 -> 2
```

## DFS Algorithm

1. Start from a source node.
2. Mark the node as visited.
3. Visit an unvisited adjacent node.
4. Continue until no unvisited nodes remain.
5. Backtrack and visit remaining nodes.

## DFS Complexity

| Operation | Complexity |
|-----------|------------|
| Time Complexity | O(V + E) |
| Space Complexity | O(V) |

---

# BFS vs DFS

| Feature | BFS | DFS |
|---------|-----|-----|
| Full Form | Breadth First Search | Depth First Search |
| Type | Graph Traversal Algorithm | Graph Traversal Algorithm |
| Data Structure | Queue | Stack / Recursion |
| Approach | Level by Level | Depth First |
| Time Complexity | O(V + E) | O(V + E) |
| Space Complexity | O(V) | O(V) |

---

# Graph Representation

BFS and DFS can be implemented using:

## 1. Adjacency Matrix

A 2D array is used to store graph connections.

Example:

```
    0 1 2
0   0 1 1
1   1 0 0
2   1 0 0
```

## 2. Adjacency List

Each vertex stores its connected vertices.

Example:

```
0 -> 1 -> 2
1 -> 0
2 -> 0
```

---

# Applications

## BFS Applications

- Shortest path in unweighted graphs
- Network broadcasting
- Social network connections
- Web crawling

## DFS Applications

- Cycle detection
- Topological sorting
- Maze solving
- Path finding
- Connected components

---

# Implementation Files

```
Algorithm
│
├── bfs.c
├── dfs.c
└── README.md
```