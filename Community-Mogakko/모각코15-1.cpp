#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


// Function declaration
bool isPerfect(int num) {
	int sum_aliquots = 0;

	for (int i = 1; i < num; ++i) {
		if (num % i == 0)
			sum_aliquots += i;
	}

	if (num == sum_aliquots)
		return true;
	else
		return false;
}


// main
int main(void) {
	int num;

	do {
		printf("완전수인지 판별할 수 입력 : ");
		scanf("%d", &num);
		if (num <= 0)
			printf("자연수만 입력하세요.\n");
	} while (num <= 0);

	bool perfect = isPerfect(num);
	if (perfect)
		printf("\n완전수입니다!\n");
	else
		printf("\n완전수가 아닙니다.\n");

	return 0;
}