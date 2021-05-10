#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	int scores[5];
	int sum = 0;

	printf("과목 점수 입력 (과목 1  2  3  4  5)\n  >>>  ");
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &scores[i]);
		if (scores[i] < 0 || scores[i] > 100) {
			printf("%d번째 과목의 점수가 잘못 되었습니다. 다시 입력해주세요.\n", i + 1);
			return 0;
		}
	}

	printf("\n입력된 과목 점수와 평균 점수는 다음과 같습니다.\n\n");
	for (int i = 0; i < 5; ++i) {
		printf("\t| 과목 %2d >> %3d 점 |\n", i + 1, scores[i]);
		sum += scores[i];
	}

	printf("\t\t\t [ 평균 : %.1lf 점 ]\n", double(sum) / 5);

	return 0;
}