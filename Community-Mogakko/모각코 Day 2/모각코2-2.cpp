#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Function declaration
int sum_digits(int num) {
	return (num / 10) + (num % 10);
};


// main
int main(void) {
	int num;

	do {
		printf("���ڸ� �Է����ּ��� (0 ~ 99) : ");
		scanf("%d", &num);
	} while (num < 0 && num > 99);

	int orig_num = num;
	int cnt = 0;
	
	int digit_sum;
	char temp[2];
	char new_num[3];
	do {
		// 1. �� �ڸ��� ��
		digit_sum = sum_digits(num);
		// 2-1. �Է� ���� ���� ���� ������ �ڸ���
		_itoa(num % 10, temp, 10);
		strcpy(new_num, temp);
		// 2-2. 2-1�� 1�� �� ����
		_itoa(digit_sum % 10, temp, 10);
		strcat(new_num, temp);
		
		num = atoi(new_num);
	} while (++cnt, num != orig_num);

	printf("�� %dȸ ��ȯ �Ŀ� ���� ���� ���ƿԽ��ϴ�!\n", cnt);
	
	return 0;
}