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

	printf("문제의 답안을 제출하세요.\n  : ");
	scanf("%s", answers);

	int score = markAnswers(answers);

	if (score != N_QUESTIONS * (-1) * 2)
		printf("\n\n\t채점 결과 [%d]점 입니다.\n", score);
	else
		printf("\n\n\t유효하지 않은 답안이 제출되었습니다. 제출된 답안을 확인하세요\n\t제출 답안 : %s", answers);

	return 0;
}