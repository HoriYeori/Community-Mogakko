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
		printf("���������� �Ǻ��� �� �Է� : ");
		scanf("%d", &num);
		if (num <= 0)
			printf("�ڿ����� �Է��ϼ���.\n");
	} while (num <= 0);

	bool perfect = isPerfect(num);
	if (perfect)
		printf("\n�������Դϴ�!\n");
	else
		printf("\n�������� �ƴմϴ�.\n");

	return 0;
}