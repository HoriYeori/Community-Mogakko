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

	printf("���� �� ���� �Է����ּ���.\n");
	printf("a b : ");
	scanf("%d %d", &a, &b);

	printf("\n\n");
	printf("���� �� : a, b = %d, %d\n", a, b);
	Swap(&a, &b);
	printf("���� �� : a, b = %d, %d\n", a, b);

	return 0;
}