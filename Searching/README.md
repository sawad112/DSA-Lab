# Searching Algorithms in C

## Overview

Searching is the process of finding the location of a target element in a collection of data. The two most common searching techniques are **Linear Search** and **Binary Search**.

---

# Linear Search

## Definition

**Linear Search** checks each element one by one until the target element is found or the list ends.

### Algorithm

1. Start from the first element.
2. Compare each element with the target.
3. If found, return its position.
4. If the end is reached, return **Not Found**.

### Example

```text
Array: 10 25 30 45 50
Target: 45

10 ❌
25 ❌
30 ❌
45 ✅ Found
```

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(1) |
| Average | O(n) |
| Worst | O(n) |

### Advantages

- Simple to implement.
- Works on sorted and unsorted arrays.
- No preprocessing required.

### Disadvantages

- Slow for large datasets.
- Checks elements one by one.

---

# Binary Search

## Definition

**Binary Search** repeatedly divides a **sorted** array into two halves until the target element is found.

> **Note:** Binary Search works **only on sorted arrays**.

### Algorithm

1. Find the middle element.
2. If the target equals the middle, return its position.
3. If the target is smaller, search the left half.
4. Otherwise, search the right half.
5. Repeat until found or the search space becomes empty.

### Example

```text
Array: 10 20 30 40 50 60 70
Target: 50

Middle = 40 → Search Right
Middle = 60 → Search Left
Middle = 50 → Found
```

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(1) |
| Average | O(log n) |
| Worst | O(log n) |

### Advantages

- Very fast for large datasets.
- Efficient searching with logarithmic complexity.

### Disadvantages

- Requires a sorted array.
- Slightly more complex to implement.

---

# Comparison

| Feature | Linear Search | Binary Search |
|---------|---------------|---------------|
| Data Requirement | Sorted/Unsorted | Sorted Only |
| Best Case | O(1) | O(1) |
| Average Case | O(n) | O(log n) |
| Worst Case | O(n) | O(log n) |
| Implementation | Easy | Moderate |
| Suitable For | Small datasets | Large sorted datasets |

---

## Applications

### Linear Search

- Small datasets
- Unsorted arrays
- Linked Lists

### Binary Search

- Large sorted arrays
- Databases
- Dictionary/Phonebook lookup
- Searching in sorted files

---

## Conclusion

- **Linear Search** is simple and works with any array but is slower for large datasets.
- **Binary Search** is much faster but requires the data to be sorted. For large sorted collections, Binary Search is the preferred choice.
