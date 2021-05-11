#define _CRT_SECURE_NO_WARNINGS

#define HOUR	3600
#define MINUTE	60
#define SECOND	1


#include <stdio.h>


// main
int main(void) {
	int total_sec;
	int h, m, s;

	do {
		printf("시/분/초로 변환할 초 입력 : ");
		scanf("%d", &total_sec);
		if (total_sec < 0)
			printf("양의 정수를 입력해야 합니다. 다시 입력해주세요.\n");
	} while (total_sec < 0);

	h = total_sec / HOUR;
	m = total_sec % HOUR / MINUTE;
	s = total_sec % MINUTE;

	printf("\n전체 초 [ %d ]초의 시/분/초 변환 결과\n", total_sec);
	printf("\t: ");
	if (h > 0)
		printf("%d시간 ", h);
	if (m > 0)
		printf("%d분 ", m);
	if (s > 0)
		printf("%d초 ", s);

	return 0;
}