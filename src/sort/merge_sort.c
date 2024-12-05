#include <stddef.h>
#include <stdlib.h>
void sort(int *array, size_t lo, size_t hi, int *aux);
int get_mid(size_t lo, size_t hi);
void merge(int *array, size_t lo, size_t mid, size_t hi, int *aux);

int get_mid(size_t lo, size_t hi) {
    return lo + (hi - lo) / 2;
}

void merge_sort(int *array, size_t size) {
  if (size <= 1)
    return;

  int *aux = (int *)malloc(size * sizeof(int));
  sort(array, 0, size - 1, aux);

  free(aux);
}

void sort(int *array, size_t lo, size_t hi, int *aux) {
  if (hi <= lo)
    return;

  size_t mid = get_mid(lo, hi);

  sort(array, lo, mid, aux);
  sort(array, mid + 1, hi, aux);
  merge(array, lo, mid, hi, aux);
}

void merge(int *array, size_t lo, size_t mid, size_t hi, int *aux) {
  size_t i = lo;
  size_t j = mid + 1;

  for (size_t k = lo; k <= hi; k++)
    aux[k] = array[k];

  for (size_t k = lo; k <= hi; k++) {
    if (i > mid)
      array[k] = aux[j++];
    else if (j > hi)
      array[k] = aux[i++];
    else if (aux[j] < aux[i])
      array[k] = aux[j++];
    else
      array[k] = aux[i++];
  }
}
