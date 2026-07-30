# Dynamic Memory Allocation in C

## Overview

Dynamic memory allocation allows programs to request and release memory during runtime instead of allocating it at compile time. This provides flexibility when the amount of required memory is unknown beforehand.

The C Standard Library (`stdlib.h`) provides the following functions for dynamic memory management:

- `malloc()`
- `calloc()`
- `realloc()`
- `free()`

---

## Functions

### 1. malloc()

Allocates a block of memory of the specified size.

### Syntax

```c
void *malloc(size_t size);
```

### Example

```c
int *arr = (int *)malloc(5 * sizeof(int));
```

### Characteristics

- Allocates memory but does **not** initialize it.
- Contains garbage values.
- Returns `NULL` if allocation fails.

---

### 2. calloc()

Allocates memory for an array and initializes all bytes to zero.

### Syntax

```c
void *calloc(size_t num, size_t size);
```

### Example

```c
int *arr = (int *)calloc(5, sizeof(int));
```

### Characteristics

- Allocates contiguous memory.
- Initializes every byte to zero.
- Returns `NULL` if allocation fails.

---

### 3. realloc()

Resizes an existing dynamically allocated memory block.

### Syntax

```c
void *realloc(void *ptr, size_t new_size);
```

### Example

```c
arr = (int *)realloc(arr, 10 * sizeof(int));
```

### Characteristics

- Expands or shrinks allocated memory.
- Existing data is preserved up to the minimum of old and new sizes.
- May move the memory block to a new location.
- Returns `NULL` if reallocation fails (original pointer remains valid if assigned safely).

Safe usage:

```c
int *temp = realloc(arr, new_size);

if (temp != NULL)
    arr = temp;
```

---

### 4. free()

Releases dynamically allocated memory back to the operating system.

### Syntax

```c
void free(void *ptr);
```

### Example

```c
free(arr);
arr = NULL;
```

### Characteristics

- Prevents memory leaks.
- After freeing memory, set the pointer to `NULL` to avoid dangling pointers.

---

## Comparison

| Feature | malloc() | calloc() | realloc() | free() |
|---------|-----------|-----------|-----------|---------|
| Allocates memory | ✅ | ✅ | Resizes existing memory | ❌ |
| Initializes memory | ❌ No | ✅ Yes (Zero) | Preserves existing data | N/A |
| Returns NULL on failure | ✅ | ✅ | ✅ | N/A |
| Used to release memory | ❌ | ❌ | ❌ | ✅ |

---

## Memory Allocation Workflow

```text
  Request Memory
       |
       v
malloc() / calloc()
       |
       v
   Use Memory
       |
       v
realloc() (Optional)
       |
       v
Continue Using Memory
       |
       v
     free()
```

---
## Best Practices

- Always check whether memory allocation returns `NULL`.
- Free every dynamically allocated memory block.
- Set pointers to `NULL` after calling `free()`.
- Use `calloc()` when zero initialization is required.
- Use a temporary pointer with `realloc()` to avoid losing the original allocation.
- Avoid accessing memory after it has been freed.

---

## Common Errors

### Memory Leak

```c
int *ptr = malloc(100);
ptr = NULL;    // Lost reference to allocated memory
```

---

### Dangling Pointer

```c
free(ptr);
printf("%d", *ptr);   // Undefined behavior
```

---

### Double Free

```c
free(ptr);
free(ptr);    // Undefined behavior
```

---
## Time Complexity

| Function | Complexity |
|----------|------------|
| malloc() | O(1) Average |
| calloc() | O(n) (Zero initialization) |
| realloc() | O(n) Worst Case |
| free() | O(1) Average |

---
## Conclusion

Dynamic memory allocation enables efficient runtime memory management in C. Proper use of `malloc()`, `calloc()`, `realloc()`, and `free()` helps create flexible, memory-efficient programs while preventing leaks and undefined behavior.
