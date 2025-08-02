- Static Memory Allocation: Stack
  - Memory is allocated at compile time. 
  - Size and structure of data must be known beforehand.
  - Examples include global variables, static variables, and constants.
  - stack overflow can occur if too much memory is allocated , leading to program crashes (e.g., too many recursive function calls , infinite loops).
  - Advantages:
    - Faster access since memory addresses are fixed.
    - No overhead of dynamic memory management.
  - Disadvantages:
    - Less flexible; cannot change size at runtime.
    - Can lead to wasted memory if not all allocated space is used.

- ![
Static vs Dynamic Memory Allocation Diagram
](<Screenshot 2025-07-29 092443.png>)

- ![Static Memory Allocation Diagram]
(<Screenshot 2025-07-29 092511.png>)

![flow diagram]
(<Screenshot 2025-07-29 093130.png>)

- Dynamic Memory Allocation: Heap
  - Memory is allocated at runtime.
  - Program can not access memory directly, but through pointers.
  - We need explicitly manage memory (allocation and deallocation), if not done properly can lead to memory leaks.
  - Size and structure of data can be determined during execution.
  - Examples include using `malloc`, `calloc`, and `new` in C/C++.
  - Advantages:
    - More flexible; can change size as needed.
    - Efficient memory usage; only allocate what is necessary.
  - Disadvantages:
    - Slower access due to pointer indirection.
    - Overhead of memory management (allocation/deallocation).

- ![Dynamic Memory Allocation Diagram](<Screenshot 2025-07-29 093858.png>)
- ![Deallocation Diagram](<Screenshot 2025-07-29 093957.png>)