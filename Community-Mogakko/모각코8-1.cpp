#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	int scores[5];
	int sum = 0;

	printf("���� ���� �Է� (���� 1  2  3  4  5)\n  >>>  ");
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &scores[i]);
		if (scores[i] < 0 || scores[i] > 100) {
			printf("%d��° ������ ������ �߸� �Ǿ����ϴ�. �ٽ� �Է����ּ���.\n", i + 1);
			return 0;
		}
	}

	printf("\n�Էµ� ���� ������ ��� ������ ������ �����ϴ�.\n\n");
	for (int i = 0; i < 5; ++i) {
		printf("\t| ���� %2d >> %3d �� |\n", i + 1, scores[i]);
		sum += scores[i];
	}

	printf("\t\t\t [ ��� : %.1lf �� ]\n", double(sum) / 5);

	return 0;
}