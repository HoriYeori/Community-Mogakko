#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


// main
int main(void) {
	char str[101];
	int numbers[10] = { 0, };

	printf("���ڿ� �Է� : ");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= '0' && str[i] <= '9')
			++numbers[ str[i] - '0'];
	}

	printf("\n���ڿ� [ %s ]�� ���Ե� ������ ����", str);
	printf("\n-----------------------\n");
	for (int i = 0; i < 10; ++i)
		printf("%d : %d��\n", i, numbers[i]);

	return 0;
}