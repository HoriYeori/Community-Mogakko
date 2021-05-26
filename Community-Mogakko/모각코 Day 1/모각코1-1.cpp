#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function declaration
void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// main
int main(void) {
	int a, b;

	printf("정수 두 개를 입력해주세요.\n");
	printf("a b : ");
	scanf("%d %d", &a, &b);

	printf("\n\n");
	printf("변경 전 : a, b = %d, %d\n", a, b);
	Swap(&a, &b);
	printf("변경 후 : a, b = %d, %d\n", a, b);

	return 0;
}