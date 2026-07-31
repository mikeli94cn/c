#include <stdio.h>

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
                int base = (num - 1) * 2 * gap;
                int sorted[limit];
                for (int k = 1; k <= limit; k++) {
                    if (j <= limit &&
                        (i > gap || arr[i - 1 + base] > arr[j + base - 1])) {
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

void merge(int arr[], int start1, int end1, int start2, int end2) {
    int arr_len = end2 - start1 + 1;
    int sorted[arr_len];
    int i = start1;
    int j = start2;
    for (int k = 1; k <= arr_len; k++) {
        if (j <= end2 && (i > end1 || arr[i - 1] > arr[j - 1])) {
            sorted[k - 1] = arr[j - 1];
            j++;
        } else {
            sorted[k - 1] = arr[i - 1];
            i++;
        }
    }
    for (int k = 1; k <= arr_len; k++) {
        arr[k + start1 - 1 - 1] = sorted[k - 1];
    }
}

void merge_sort_recur(int arr[], int start, int end) {
    int arr_len = end - start + 1;
    if (arr_len >= 2) {
        merge_sort_recur(arr, start, (end - start) / 2 + start);
        merge_sort_recur(arr, (end - start) / 2 + start + 1, end);

        merge(arr, start, (end - start) / 2 + start,
              (end - start) / 2 + start + 1, end);
    }
}
