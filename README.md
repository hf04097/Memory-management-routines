# memory-management-routines
Routines which provide dynamic memory management capabilities to the user are implemented in C

Following functions are implemented with the described behaviour:

* **int my_init():** this function initializes a region of memory in 1MB in your program. This block of memory is used as heap and is managed dynamically. It returns if it is successfully able to allocate the region of memory and 0 on error. It uses the mmap() system call for allocating memory.

* **void * my_malloc(int size):** this function mimics the behaviour of malloc(). It allocates a block of size bytes from the heap, i.e. the block of memory that had been called allocated by the call to my_init(), and it returns a pointer to the start of the newly allocated memory. It returns NULL on error.

* **void my_free (void *):** this function takes a pointer previouly allocated by  my_malloc() and free it i.e., returns the memory pointed to by this pointer to the pool of memory maintainined internally so that it can be used in a subsequent call to my_malloc(). In case it is passed an invalid pointer it exits the program by displaying a suitable error message.

* **void * my_calloc(int num, int size):** this mimics the behaviour of libc calloc() function.

* **void * my_realloc(void *, int size):** this mimics the behaviour of libc realloc() function.

* **void my_coalesce():** this coalesces the fragmented free list.


