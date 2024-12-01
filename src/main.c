#include "sorting.h"
#include <stdio.h>

int main() {
  int arr[10] = {7, 2, 9, 4, 1, 8, 5, 10, 3, 6};

  printf("Unsorted array:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr[i]);

  printf("\n");

  bubble_sort(arr, 10);

  printf("After bubble sort:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr[i]);

  printf("\n");

  int arr2[10] = {7, 2, 9, 4, 1, 8, 5, 10, 3, 6};

  printf("Unsorted array2:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr2[i]);

  printf("\n");

  selection_sort(arr2, 10);

  printf("After selection sort:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr2[i]);

  printf("\n");

  int arr3[10] = {7, 2, 9, 4, 1, 8, 5, 10, 3, 6};

  printf("Unsorted array3:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr3[i]);

  printf("\n");

  insertion_sort(arr3, 10);

  printf("After insertion sort:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr3[i]);

  printf("\n");

  return 0;
}
