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

	printf("���� ���� : ");
	scanf("%d", &n);

	// memory allocation
	arr = (int*)calloc(n, sizeof(int));
	printf("\n���� �Է�\n    >>>    ");
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	// get key
	int key;
	printf("\nã�� �� �Է� : ");
	scanf("%d", &key);

	int idx = binary_search(arr, key, 0, n);
	if (idx != -1)
		printf("\n\t%d�� �ε������� ã�ҽ��ϴ�!", idx);
	else
		printf("\n\tã���� �ϴ� ���� �����ϴ�.");

	return 0;
}