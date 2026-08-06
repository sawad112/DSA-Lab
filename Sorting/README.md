# Sorting Algorithms in C

## Overview

Sorting is the process of arranging data in a specific order, usually **ascending** or **descending**.

Sorting algorithms are widely used in searching, data analysis, databases, and many other applications.

---

# Sorting Algorithms Implemented

## 1. Bubble Sort

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

### Space Complexity

```
O(1)
```

---

## 2. Selection Sort

Selection Sort repeatedly finds the smallest element from the unsorted part and places it at the correct position.

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n²) |
| Average | O(n²) |
| Worst | O(n²) |

### Space Complexity

```
O(1)
```

---

## 3. Insertion Sort

Insertion Sort builds the sorted array one element at a time by inserting elements into their correct position.

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

### Space Complexity

```
O(1)
```

---

## 4. Merge Sort

Merge Sort uses the **divide and conquer** technique. It divides the array into halves, sorts them, and merges the sorted parts.

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n log n) |

### Space Complexity

```
O(n)
```

---

## 5. Quick Sort

Quick Sort selects a pivot element and partitions the array around the pivot.

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n²) |

### Space Complexity

```
O(log n)
```

---

## 6. Counting Sort

Counting Sort counts the frequency of each element and places elements according to their count.

### Time Complexity

```
O(n + k)
```

Where:
- n = number of elements
- k = range of values

### Space Complexity

```
O(k)
```

---

## 7. Bucket Sort

Bucket Sort distributes elements into different buckets, sorts each bucket, and combines them.

### Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n+k) |
| Average | O(n+k) |
| Worst | O(n²) |

### Space Complexity

```
O(n+k)
```

---

## 8. Radix Sort

Radix Sort sorts numbers digit by digit using a stable sorting algorithm.

### Time Complexity

```
O(nk)
```

Where:
- n = number of elements
- k = number of digits

### Space Complexity

```
O(n+k)
```

---

# Comparison Table

| Algorithm | Best | Average | Worst | Space |
|-----------|------|---------|-------|-------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) |
| Counting Sort | O(n+k) | O(n+k) | O(n+k) | O(k) |
| Bucket Sort | O(n+k) | O(n+k) | O(n²) | O(n+k) |
| Radix Sort | O(nk) | O(nk) | O(nk) | O(n+k) |

---

# Features

- Implemented in C
- Beginner-friendly code
- Covers comparison and non-comparison sorting algorithms
- Includes time and space complexity analysis
- Suitable for DSA practice
