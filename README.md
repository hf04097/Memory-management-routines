# memory-management-routines
Routines which provide dynamic memory management capabilities to the user are implemented in C

Following functions are implemented with the described behaviour:

* *int my init():* this function initializes a region of memory in 1MB in your program. This block of memory is used as heap and is managed dynamically. It returns if it is successfully able to allocate the region of memory and 0 on error. It uses the mmap() system call for allocating memory.

* *void * my malloc(int size)*: this function should mimic the behaviour of malloc(). It
should allocate a block of size bytes from the your heap, i.e. the block of memory that
had been called allocated by your call to my init(), and return a pointer to the start of the
newly allocated memory. It should return NULL on error.

 void my free (void *): this function should take a pointer previouly allocated by
my malloc() and free it i.e., return the memory pointed to by this pointer to the pool
of memory you will be maintaining internally so that it can be used in a subsequent call to
my malloc(). In case it is passed an invalid pointer it should exit the program by displaying
a suitable error message.
1
 void * my calloc(int num, int size): this should mimic the behaviour of libc calloc()
function.
 void * my realloc(void *, int size): this should mimic the behaviour of libc realloc()
function.
 void my coalesce(): this should coalesce the fragmented free list as described in the book
