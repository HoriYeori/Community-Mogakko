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
		printf("��/��/�ʷ� ��ȯ�� �� �Է� : ");
		scanf("%d", &total_sec);
		if (total_sec < 0)
			printf("���� ������ �Է��ؾ� �մϴ�. �ٽ� �Է����ּ���.\n");
	} while (total_sec < 0);

	h = total_sec / HOUR;
	m = total_sec % HOUR / MINUTE;
	s = total_sec % MINUTE;

	printf("\n��ü �� [ %d ]���� ��/��/�� ��ȯ ���\n", total_sec);
	printf("\t: ");
	if (h > 0)
		printf("%d�ð� ", h);
	if (m > 0)
		printf("%d�� ", m);
	if (s > 0)
		printf("%d�� ", s);

	return 0;
}