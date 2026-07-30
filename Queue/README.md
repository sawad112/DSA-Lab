# Queue and Circular Queue

## Overview

A **Queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. Elements are inserted at the **rear** and removed from the **front**.

A **Circular Queue** is an improved version of a queue where the last position is connected to the first, allowing efficient reuse of empty spaces.

---

# Queue

## Operations

- **Enqueue()** – Insert an element at the rear.
- **Dequeue()** – Remove an element from the front.
- **Peek()** – Display the front element.
- **isEmpty()** – Check whether the queue is empty.
- **isFull()** – Check whether the queue is full (array implementation).

### Time Complexity

| Operation | Complexity |
|----------|------------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |

### Advantages

- Simple FIFO implementation.
- Fast insertion and deletion.
- Widely used in scheduling and buffering.

### Limitation

In a linear array queue, once the rear reaches the end of the array, freed spaces at the front cannot be reused, resulting in **false overflow**.

---

# Circular Queue

## Operations

- **Enqueue()** – Insert an element at the rear.
- **Dequeue()** – Remove an element from the front.
- **Peek()** – Display the front element.

### Conditions

```c
// Empty Queue
front == -1

// Full Queue
(rear + 1) % SIZE == front
```

### Time Complexity

| Operation | Complexity |
|----------|------------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |

### Advantages

- Efficient memory utilization.
- Eliminates false overflow.
- Supports continuous insertion and deletion.

### Applications

- CPU Scheduling
- Printer Queue
- Keyboard Buffer
- Network Packet Buffer
- Streaming Systems

---

## Comparison

| Feature | Queue | Circular Queue |
|---------|-------|----------------|
| Memory Usage | Less Efficient | More Efficient |
| False Overflow | Yes | No |
| FIFO | Yes | Yes |
| Wrap Around | No | Yes |

---

## Conclusion

A **Queue** provides FIFO processing but may waste memory in an array implementation. A **Circular Queue** overcomes this limitation by wrapping the rear to the beginning of the array, making better use of available memory while maintaining O(1) insertion and deletion.
