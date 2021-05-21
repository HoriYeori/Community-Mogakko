#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	unsigned int width, length, height; // 가로 세로 높이

	printf("가로 : "); scanf("%d", &width);
	printf("세로 : "); scanf("%d", &length);
	printf("높이 : "); scanf("%d", &height);

	// 꼭짓점을 제외한 모서리에 위치한 블록만 두 면이 색칠됨
	// 모서리 개수 가로:4 세로:4 높이:4
	printf("두 면만 색칠되는 정육면체 블록의 수는");
	printf(" %d개 입니다.\n", (width - 2) * 4 + (length - 2) * 4 + (height - 2) * 4);

	return 0;
}