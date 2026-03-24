#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define INITNUM 100


typedef struct {
	int arr[INITNUM];
	int len;
} arr_with_len_t;

arr_with_len_t* read_int()
{
	arr_with_len_t* ptr;
	ptr=malloc(sizeof(arr_with_len_t));
	ptr->len = 0;
	for (int i = 1; i <= INITNUM; i++) {
		ptr->arr[i - 1] = -1;
	}
	int i_num;
	while (true) {
		scanf("%d", &i_num);
		if (i_num != -1) {
			ptr->arr[ptr->len] = i_num;
			ptr->len++;

		} else {
			break;
		}
	}

	return ptr;
}

