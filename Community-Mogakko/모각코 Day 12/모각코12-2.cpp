#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function declaration
unsigned int Fibonacci(int n) {
	unsigned int sequence[3] = { 1, 1, };

	if (n <= 2)
		return sequence[n - 1];
	else {
		for (int i = 2; i < n; ++i) {
			sequence[2] = sequence[0] + sequence[1];
			sequence[0] = sequence[1];
			sequence[1] = sequence[2];
		}
	}
	return sequence[1];
}


// main
int main(void) {
	int n;

	do {
		printf("�� ��° �Ǻ���ġ ���� �˰� �����Ű���?\n\t:  ");
		scanf("%u", &n);
		if (n < 0)
			printf("0 �̻��� ���� �Է��ؾ� �մϴ�.\n");
	} while (n < 0);

	if (n == 0)
		printf("\n\t 0\n");
	else
		printf("\n  [OUTPUT]  %d��° �Ǻ���ġ ���� %u �Դϴ�.\n", n, Fibonacci(n));

	return 0;
}