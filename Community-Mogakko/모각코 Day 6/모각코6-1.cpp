#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	int n;
	int prime_cnt = 0;

	printf("¼ö ÀÔ·Â : ");
	scanf("%d", &n);

	if (n % 2 == 0)
		++prime_cnt;
	if (n % 3 == 0)
		++prime_cnt;
	if (n % 5 == 0)
		++prime_cnt;

	switch (prime_cnt) {
	case 3:
		printf("A\n");
		break;
	case 2:
		printf("B\n");
		break;
	case 1:
		printf("C\n");
		break;
	case 0:
		printf("D\n");
		break;
	default:
		printf("error\n");
		break;
	}

	return 0;
}