#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	char exp[51];

	scanf("%s", exp);
	char origin_exp[51];
	strcpy(origin_exp, exp);	// ���� ���� ����

	long long sum = 0;
	char* num = strtok(exp, "+");
	while (num != NULL) {
		sum += atoi(num);
		num = strtok(NULL, "+");
	}

	printf("���� [ %s ] �� ��� �����\n", origin_exp);
	printf("\t\t[ %lld ] �Դϴ�.\n", sum);

	return 0;
}