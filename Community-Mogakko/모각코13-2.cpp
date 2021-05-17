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

	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	int move_count = calcMoveCount(n);

	if (move_count == -1) {
		printf("\n���� ���� �ű��� ���߽��ϴ�.\n");
	}
	else {
		printf("\n�� %d���� �̵����� ���� ���� �Ű���ϴ�.\n", move_count);
	}
}