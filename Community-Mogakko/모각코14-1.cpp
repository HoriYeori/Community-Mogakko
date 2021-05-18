#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


// Function declaration
int compareIntAscending(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}


// main
int main(void) {
	int n;
	int numbers[10];

	printf("n : ");
	scanf("%d", &n);

	for (int i = 0; i < 10; ++i) {
		printf("%d��° �ڿ��� : ", i + 1);
		scanf("%d", &numbers[i]);
	}

	printf("\n�Էµ� �ڿ�����\n  >>  ");
	for (int i = 0; i < 10; ++i)
		printf("%d ", numbers[i]);

	printf("\n%d�� ���� ������\n  >>  ", n);
	for (int i = 0; i < 10; ++i) {
		numbers[i] %= n;
		printf("%d ", numbers[i]);
	}

	qsort(numbers, 10, sizeof(int), compareIntAscending);
	int cnt = 1;
	for (int i = 1, now = numbers[0]; i < 10; ++i) {
		if (now != numbers[i]) {
			++cnt;
			now = numbers[i];
		}
	}

	printf("\n\n");
	printf("\t�� %d���� ���� �ٸ� ���������� �ֽ��ϴ�.\n", cnt);

	return 0;
}