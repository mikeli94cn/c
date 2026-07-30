void merge_sort_iter(int arr[], int arr_len) {
  for (int gap = 1; gap < arr_len; gap *= 2) {
    int group_no;
    if (arr_len % (2 * gap) == 0) {
      group_no = arr_len / (2 * gap);
    } else {
      group_no = arr_len / (2 * gap) + 1;
    }
    for (int num = 1; num <= group_no; num++) {
      int limit;
      if (num < group_no) {
        limit = 2 * gap;
      } else {
        limit = arr_len - (group_no - 1) * 2 * gap;
      }
      if (limit > gap) {
        int i = 1;
        int j = gap + 1;
        int base=(group_no-1)*2*gap;
        int sorted[limit];
        for (int k = 1; k <= limit; k++) {
          if (i > gap || arr[i - 1 + base] > arr[j + base - 1]) {
            sorted[k - 1] = arr[j + base - 1];
            j++;
          } else {
            sorted[k - 1] = arr[i + base - 1];
            i++;
          }
        }
        for (int k = 1; k <= limit; k++) {
          arr[k + base - 1] = sorted[k - 1];
        }
      }
    }
  }
}
