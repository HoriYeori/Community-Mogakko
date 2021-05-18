#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function declaration
void printDiceCombinations(int n) {
	int dice1, dice2;

	printf("\n%d를 만드는 두 주사위의 눈의 경우의 수 :\n", n);
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
		printf("경우의 수를 알고 싶은 두 주사위의 눈의 수의 합을 입력해주세요.\n : ");
		scanf("%d", &n);
		if (n < 2 || n > 12)
			printf("2에서 12 사이의 수만 입력해야 합니다.\n");
	} while (n < 2 || n > 12);

	printDiceCombinations(n);

	return 0;
}