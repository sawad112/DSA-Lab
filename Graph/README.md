# Graph Implementation in C

## Overview

A **Graph** is a non-linear data structure that consists of **vertices (nodes)** and **edges (connections)**.

A graph is represented as:

```
G = (V, E)

V → Set of vertices
E → Set of edges
```

Example:

```
    1 ----- 2
    |       |
    |       |
    3 ----- 4
```

---

## Types of Graphs

### 1. Undirected Graph
- Edges have no direction.
- Connection works both ways.

```
A ---- B
```

### 2. Directed Graph
- Edges have a direction.

```
A ---> B
```

### 3. Weighted Graph
- Edges have values (weights).

```
A --5--> B
```

---

## Graph Representation

### 1. Adjacency Matrix

A 2D array is used to store connections.

Example:

```
    0 1 2
0   0 1 1
1   1 0 0
2   1 0 0
```

### 2. Adjacency List

Each vertex stores a list of connected vertices.

Example:

```
1 -> 2 -> 3
2 -> 1
3 -> 1
```

---

## Basic Operations

- Add Vertex
- Add Edge
- Remove Vertex
- Remove Edge
- Display Graph
- Graph Traversal

---

## Graph Traversal

### BFS (Breadth First Search)

- Uses Queue.
- Visits nodes level by level.

### DFS (Depth First Search)

- Uses Stack/Recursion.
- Goes deep before backtracking.

---

## Simple Graph Implementation (Adjacency Matrix)

```c
#include <stdio.h>

int main()
{
    int graph[5][5] = {0};

    // Add edges
    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[1][2] = 1;
    graph[2][1] = 1;

    graph[2][3] = 1;
    graph[3][2] = 1;

    // Display graph
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

Output:

```
0 1 0 0
1 0 1 0
0 1 0 1
0 0 1 0
```

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Add Edge | O(1) |
| Remove Edge | O(1) |
| BFS | O(V + E) |
| DFS | O(V + E) |
| Search | O(V + E) |

---

## Applications

- Social networks
- Google Maps
- Network routing
- Web page linking
- Recommendation systems
- Computer networks

---

## Advantages

- Represents relationships easily.
- Efficient for connected data.
- Supports many traversal algorithms.

---

## Disadvantages

- More complex than linear structures.
- Requires extra memory.
- Searching can be slower for large graphs.

---

## Conclusion

Graphs are powerful data structures used to represent relationships between objects. They are widely used in networking, path finding, databases, and many real-world applications.