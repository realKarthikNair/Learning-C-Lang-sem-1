# Dynamic memory allocation

> Before getting into Dynamic memory allocation, let us understand what static memory allocation is. In static memory allocation, memory is allocated while compiling and thus variables get allocated permanently. e.g., when we declare a variable x with data type int, we are actually telling the compiler to allocate 4 bytes to that particular variable (or 2 depending on the compiler)

- Basically delaying memory allocation till execution so that we could allocate dynamic memory values to variables according to some criteria, for example user input.

- It provides reusability of memory while the program is running. So, it is more efficient than static memory allocation on efficiency. 

- malloc(), calloc(), free() and realloc() are the different methods of dynamic memory allocation

> Both Static Memory Allocation and Dynamic Memory Allocation has its own ups and downs. Notes regarding that might be added later... Google is always there if the reader wants to know more on that

# Methods of Dynamic Memory Allocation

### Malloc()

- Allocates a memory block of given size (in bytes) and returns a pointer to the beginning of the block

- Memory allocation is not contiguous, and we can thus assign malloc() function to any pointer

- Syntax : 
  
  ```c
  (cast-data-type *)calloc(num, size-in-bytes)
  ```

- For example:
  
  ```c
  ptr = (int*) malloc(100 * sizeof(int));
  ```

### Calloc()

- Allocates multiple blocks of memory and returns a pointer to its memory location

- Memory allocation is contiguous
