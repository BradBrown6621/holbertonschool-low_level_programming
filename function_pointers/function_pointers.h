#ifndef FuNC_PTRS
#define FUNC_PTRS

typedef unsigned int size_t;

void print_name(char *name, void (*f)(char*));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
