#include "bubble_sort.c"
#include "insert_sort.c"
#include "merge_sort.c"
#include "print_arr.c"
#include "select_sort.c"
#include <stdio.h>

int main() {
    // int arr[] = {2, 1};
    int arr[] = {2, 3, 4, 1};
    // int arr[] = {6, 5, 3, 1, 8, 7, 2, 4};
    // int arr[] = {2, 1};
    // int arr[] = {3, 1, 4, 2};
    // int arr[] = {4, 3, 2, 1};
    // int arr[] = {7, 2, 4, 6, 8, 1, 5, 3};
    // int arr[] = {4, 1, 7, 3, 8, 2, 5, 6};
    // int arr[] = {7, 10, 2, 16, 4, 13, 6, 9, 8, 12, 1, 11, 5, 15, 3, 14};
    // int arr[] = {17, 7, 18, 10, 19, 2, 16, 32, 4, 31, 13, 30, 6, 29, 9, 28,
    // 8, 27, 12, 26, 1, 25, 11, 24, 5, 23, 15, 22, 3, 21, 14, 20};
    // int arr[] =
    // {17, 64, 7, 63, 18, 62, 10, 61, 19, 60, 2, 59, 16, 58, 32, 57, 4, 56,
    // 31, 55, 13, 54, 30, 53, 6, 52, 29, 51, 9, 50, 28, 49, 8, 48, 27, 47,
    // 12, 46, 26, 45, 1, 44, 25, 43, 11, 42, 24, 41, 5, 40, 23, 39, 15, 38,
    // 22, 37, 3, 36, 21, 35, 14, 34, 20, 33};
    // int arr[] = {3, 1, 2};
    // int arr[] = {7, 2, 4, 6, 1,5, 3};
    // int arr[] = {1, 1, 4, 2, 1, 3};
    // int arr[] = {7, 3, 5, 5, 1, 2, 2, 3, 9, 2, 2, 7, 1, 7, 3, 2, 3, 6, 6, 7};
    // int arr[] = {2, 5, 8, 3, 7, 1, 6, 4};
    int arr_len = sizeof(arr) / sizeof(int);
    print_arr(arr, arr_len);
    // bubble_sort(arr, arr_len);
    // select_sort(arr, arr_len);
    // insert_sort(arr,arr_len);
    // merge_sort_iter(arr,arr_len);
    merge_sort_recur(arr, 1, arr_len);
    print_arr(arr, arr_len);
}
