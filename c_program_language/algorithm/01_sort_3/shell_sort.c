void shell_sort_iter(int arr[]) {
    int arr_len;
    for (int gap = arr_len / 2; gap >= 1; gap /= 2) {
        for (int i = arr_len; i >= 1; i--) {
            int value = arr[i - 1];
            for (int j = i - gap; arr[j - 1] >= value; j -= gap) {
                arr[j + gap - 1] = arr[j - 1];
            }
            arr[j + gap - 1] = value;
        }
    }
}
