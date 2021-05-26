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
		printf("몇 번째 피보나치 수를 알고 싶으신가요?\n\t:  ");
		scanf("%u", &n);
		if (n < 0)
			printf("0 이상의 수를 입력해야 합니다.\n");
	} while (n < 0);

	if (n == 0)
		printf("\n\t 0\n");
	else
		printf("\n  [OUTPUT]  %d번째 피보나치 수는 %u 입니다.\n", n, Fibonacci(n));

	return 0;
}