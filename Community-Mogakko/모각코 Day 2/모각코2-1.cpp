#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	char exp[51];

	scanf("%s", exp);
	char origin_exp[51];
	strcpy(origin_exp, exp);	// 원본 수식 보존

	long long sum = 0;
	char* num = strtok(exp, "+");
	while (num != NULL) {
		sum += atoi(num);
		num = strtok(NULL, "+");
	}

	printf("계산식 [ %s ] 의 계산 결과는\n", origin_exp);
	printf("\t\t[ %lld ] 입니다.\n", sum);

	return 0;
}