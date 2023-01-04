#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search(int *array, size_t size, int value);
int check_array(int *array, size_t size, size_t l, size_t r, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
void print_arr(int *array, size_t f, size_t l);
int bnry_search(int *array, int value, int f, int l);
int exponential_search(int *array, size_t size, int value);

#endif
