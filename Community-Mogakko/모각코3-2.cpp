#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


// Function declaration
int binary_search(int arr[], int key, int left, int right) {
	if (left > right)
		return -1;
	
	int idx = (right + left) / 2;

	if (key < arr[idx])
		return idx = binary_search(arr, key, left, idx - 1);
	else if (key > arr[idx])
		return idx = binary_search(arr, key, idx + 1, right);
	else
		return idx;
}


// main
int main(void) {
	int n;
	int *arr;

	printf("정수 개수 : ");
	scanf("%d", &n);

	// memory allocation
	arr = (int*)calloc(n, sizeof(int));
	printf("\n수열 입력\n    >>>    ");
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	// get key
	int key;
	printf("\n찾을 수 입력 : ");
	scanf("%d", &key);

	int idx = binary_search(arr, key, 0, n);
	if (idx != -1)
		printf("\n\t%d번 인덱스에서 찾았습니다!", idx);
	else
		printf("\n\t찾고자 하는 값이 없습니다.");

	return 0;
}