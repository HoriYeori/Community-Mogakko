#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	int num;

	do {
		printf("���� �Է� : ");
		scanf("%d", &num);
		if (num > 99999 || num < -99999)
			printf("5�ڸ� ������ ���� �Է����ּ���.\n");
	} while (num > 99999 || num < -99999);

	int digits_sum = 0;
	if (num >= 0) {
		for (int i = num; i > 0; i /= 10)
			digits_sum += i % 10;
	}
	else {
		for (int i = num * (-1); i > 0; i /= 10)
			digits_sum += i % 10;
		digits_sum *= -1;
	}

	printf("\n���� [ %d ]�� �� �ڸ����� ���� [ %d ]�Դϴ�.\n", num, digits_sum);

	return 0;
}