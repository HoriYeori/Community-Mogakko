#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function Declaration
void printIntArray(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	return;
}

void insertIntNum(int arr[], int size, int const num) {
	arr[size - 1] = num;
	for (int i = size - 2; i >= 0; --i) {
		if (arr[i] > arr[i + 1]) {
			int tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
		}
		else {	// no need to continue
			break;
		}
	}
}


// main
int main(void) {
	int nums[6];

	printf("���� �Է��ϼ���(���� 5��) (ex: 1 12 23 45 56)\n\t: ");
	for (int i = 0; i < 5; ++i)
		scanf("%d", &nums[i]);

	int new_num;
	printf("�߰��� ���� �Է��ϼ���(����)\n\t: ");
	scanf("%d", &new_num);

	// result message
	printf("\n\n\t���� �迭 [ ");
	printIntArray(nums, 5);
	printf("] �� ���ο� �� %d ��/�� �߰��ϸ�\n", new_num);

	insertIntNum(nums, 6, new_num);		// put and sort

	printf("\t\t[ ");
	printIntArray(nums, 6);
	printf("] �� �˴ϴ�!\n\n");

	return 0;
}