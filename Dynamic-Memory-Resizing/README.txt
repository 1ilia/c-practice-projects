# ⚡ Safe Dynamic Memory Resizing in C

A practical implementation showcasing how to allocate, expand, and safely manage heap memory using `calloc()` and `realloc()`.

## 🧠 Why this approach?

Unlike basic allocation examples, this program follows defensive programming standards to prevent memory corruption:

- **Clean Initialization:** Uses `calloc()` to automatically zero-initialize elements, avoiding garbage values.
- **Memory Leak Protection:** Implements a temporary pointer (`*temp`) during `realloc()`. If the reallocation fails, the original data and address remain untouched rather than being lost.
- **Safe Cleanup:** Ensures all pointers are freed and safely assigned to `NULL` to eliminate dangling pointers.

