#define _CRT_SECURE_NO_WARNINGS
#define N_QUESTIONS	10


#include <stdio.h>


// Function declaration
int markAnswers(char answers[]) {
	int score = 0;
	int serial = 0;
	for (int i = 0; i < N_QUESTIONS; ++i) {
		if (answers[i] == 'O' || answers[i] == 'o') {
			++serial;
			score += serial;
		}
		else if (answers[i] == 'X' || answers[i] == 'x') {
			serial = 0;
		}
		else
			return N_QUESTIONS * (-1) * 2;
	}

	return score;
}


// main
int main(void) {
	char answers[11];

	printf("������ ����� �����ϼ���.\n  : ");
	scanf("%s", answers);

	int score = markAnswers(answers);

	if (score != N_QUESTIONS * (-1) * 2)
		printf("\n\n\tä�� ��� [%d]�� �Դϴ�.\n", score);
	else
		printf("\n\n\t��ȿ���� ���� ����� ����Ǿ����ϴ�. ����� ����� Ȯ���ϼ���\n\t���� ��� : %s", answers);

	return 0;
}