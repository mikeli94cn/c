#include <stdio.h>
void print_arr(int arr[], int arr_len) {
  for (int i = 1; i <= arr_len; i++) {
    printf("%d ", arr[i - 1]);
  }
  printf("\n");
}
