#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function declaration
unsigned int GCD(unsigned int a, unsigned int b) {
	unsigned int r;
	do {
		r = a % b;	// get gcd
		a = b; b = r;	// next step
	} while (r != 0);
	
	return a;
}


// main
int main(void) {
	unsigned int a, b;

	printf("최대공약수를 구할 두 수를 입력해주세요.\n\t(a b) : ");
	scanf("%u %u", &a, &b);
	if (a < b) { unsigned int temp = a; a = b; b = temp; }	// arrange

	unsigned int gcd = GCD(a, b);

	printf("%u와 %u의 최대공약수는 %u 입니다.\n", a, b, gcd);

	return 0;
}