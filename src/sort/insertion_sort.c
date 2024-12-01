#include "sorting.h"
#include <stddef.h>

void insertion_sort(int *array, size_t size) {
  for (size_t i = 0; i < size; i++) {
    for (size_t j = i; j > 0 && array[j] < array[j - 1]; j--)
      swap(&array[j], &array[j - 1]);
  }
}
