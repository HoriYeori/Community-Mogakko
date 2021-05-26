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
		printf("숫자를 입력해주세요 (0 ~ 99) : ");
		scanf("%d", &num);
	} while (num < 0 && num > 99);

	int orig_num = num;
	int cnt = 0;
	
	int digit_sum;
	char temp[2];
	char new_num[3];
	do {
		// 1. 각 자릿수 합
		digit_sum = sum_digits(num);
		// 2-1. 입력 받은 수의 가장 오른쪽 자릿수
		_itoa(num % 10, temp, 10);
		strcpy(new_num, temp);
		// 2-2. 2-1과 1의 수 결합
		_itoa(digit_sum % 10, temp, 10);
		strcat(new_num, temp);
		
		num = atoi(new_num);
	} while (++cnt, num != orig_num);

	printf("총 %d회 변환 후에 원래 수로 돌아왔습니다!\n", cnt);
	
	return 0;
}