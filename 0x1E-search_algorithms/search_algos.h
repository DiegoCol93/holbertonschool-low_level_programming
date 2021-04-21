#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdlib.h>
#include <stdio.h>

/* 0. Linear search | Linearly searches for an int number. - - - - - - - - - */
int linear_search(int *array, size_t size, int value);

/* 1. Binary search | Binary search for an int number. - - - - - - - - - - - */
int binary_search(int *array, size_t size, int value);

/* 100. Jump search | Jumps searching for an int number. - - - - - - - - - - */
int jump_search(int *array, size_t size, int value);

/* 102. Interpolation search | Algorithm to find an int number. - - - - - - -*/
int interpolation_search(int *array, size_t size, int value);

/* 103. Exponential search |  Searches exponentially for a number. - - - - - */
int exponential_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */
