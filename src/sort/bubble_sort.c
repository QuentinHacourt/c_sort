#include "sorting.h"
#include <stdbool.h>
#include <stddef.h>

void bubble_sort(int *array, size_t size) {
  bool swapped;

  for (size_t i = 0; i < size - 1; i++) {
    swapped = false;
    for (size_t j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(&array[j], &array[j + 1]);
        swapped = true;
      }
    }

    if (!swapped)
      break;
  }
}
