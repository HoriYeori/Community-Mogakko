#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


// main
int main(void) {
	char number[21];

	printf("���� �Է� : ");
	scanf("%s", number);

	printf("\n������ ���� ���� >> ");
	int length = strlen(number);
	for (int i = 0; i < length; ++i) {
		printf("%c", number[i]);
		if ((length - (i + 1)) % 3 == 0 && i != length - 1)
			printf(",");
	}

	return 0;
}