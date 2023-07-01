#ifndef MALLOC_FREE_HEADER
#define MALLOC_FREE_HEADER

char *create_array(unsigned int size, char c);
char *_strup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **, int height);

#endif
