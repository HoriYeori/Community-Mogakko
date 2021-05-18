#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function declaration
void printDiceCombinations(int n) {
	int dice1, dice2;

	printf("\n%d�� ����� �� �ֻ����� ���� ����� �� :\n", n);
	for (dice1 = 1; dice1 <= 6; ++dice1) {
		for (dice2 = 1; dice2 <= 6; ++dice2) {
			if (dice1 + dice2 == n)
				printf("%d %d\n", dice1, dice2);
		}
	}
}


// main
int main(void) {
	int n;

	do {
		printf("����� ���� �˰� ���� �� �ֻ����� ���� ���� ���� �Է����ּ���.\n : ");
		scanf("%d", &n);
		if (n < 2 || n > 12)
			printf("2���� 12 ������ ���� �Է��ؾ� �մϴ�.\n");
	} while (n < 2 || n > 12);

	printDiceCombinations(n);

	return 0;
}