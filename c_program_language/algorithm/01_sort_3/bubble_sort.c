void bubble_sort(int arr[], int arr_len) {
  for (int i = 1; i <= arr_len - 1; i++) {
    for (int j = 1; j <= arr_len - i; j++) {
      if (arr[j - 1] > arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
    }
  }
}
