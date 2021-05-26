#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	int a, b;
	
	printf("a b : ");
	scanf("%d %d", &a, &b);

	printf("총 %d번 쪼개 초콜릿을 모두 한 칸으로 나눴습니다!\n",
		(a - 1) + a * (b - 1));
	// 가로 a칸을 한 칸으로 만들기 위해선 a - 1번 쪼개야 함
	// 세로 b칸을 한 칸으로 만들기 위해선 b - 1번 쪼개야 함
	// 가로로 한 칸씩 a줄에 대해 모두 세로로 b - 1번 쪼개줘야 1칸짜리 정사각형이 됨
	// (b - 1) * a
	// --> 가로 (a - 1) + 세로 (b - 1)번 * 가로줄 개수 a
	// == (a - 1) + (b - 1) * a

	return 0;
}