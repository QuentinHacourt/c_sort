#ifndef SORTING_H
#define SORTING_H

#include <stddef.h>
void swap(int *a, int *b);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);

#endif
