#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


// Function declaration
bool is_even_aliquots(int num) {
	int cnt = 0;

	for (int i = 1; i <= num; ++i) {
		if (num % i == 0)
			++cnt;
	}

	return cnt % 2 == 0;
}


// main
int main(void) {
	int a, b;

	printf("정수 두 개를 입력해주세요.\n");
	printf("\t: ");
	scanf("%d %d", &a, &b);

	int cnt = 0;
	for (int i = a; i <= b; ++i) {
		if (is_even_aliquots(i))
			++cnt;
	}

	printf("\n\n");
	printf("%d부터 %d까지의 수 중 약수가 짝수인 수의 개수는 [ %d ]개 입니다.\n",
		a, b, cnt);

	return 0;
}