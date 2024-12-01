#include "sorting.h"
#include <stddef.h>

void selection_sort(int *array, size_t size) {
  for (size_t i = 0; i < size; i++) {
    int min = i;
    for (size_t j = i + 1; j < size; j++)
      if (array[j] < array[min])
        min = j;
    swap(&array[i], &array[min]);
  }
}
