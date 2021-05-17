#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function declaration
int calcMoveCount(int n) {
	int moves = 0;
	
	moves += n / 5;

	n %= 5;
	moves += n / 3;

	n %= 3;
	if (n == 0)
		return moves;
	else
		return -1;
}


// main
int main(void) {
	int n;

	printf("물의 양을 입력하세요 : ");
	scanf("%d", &n);

	int move_count = calcMoveCount(n);

	if (move_count == -1) {
		printf("\n물을 전부 옮기지 못했습니다.\n");
	}
	else {
		printf("\n총 %d번의 이동으로 물을 전부 옮겼습니다.\n", move_count);
	}
}