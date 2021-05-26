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
		printf("%d번째 자연수 : ", i + 1);
		scanf("%d", &numbers[i]);
	}

	printf("\n입력된 자연수들\n  >>  ");
	for (int i = 0; i < 10; ++i)
		printf("%d ", numbers[i]);

	printf("\n%d로 나눈 나머지\n  >>  ", n);
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
	printf("\t총 %d개의 서로 다른 나머지들이 있습니다.\n", cnt);

	return 0;
}