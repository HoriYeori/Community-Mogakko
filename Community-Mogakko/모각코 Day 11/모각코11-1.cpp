#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


// Function declaration
void printMiddleLetter(char str[], int len) {
	printf("\n  ���ڿ� [ %s ]�� ��� ���ڴ� ", str);
	
	if (len % 2 == 1)
		printf("\'%c\' �Դϴ�.\n", str[len / 2]);
	else
		printf("\'%c%c\' �Դϴ�.\n", str[len / 2 - 1], str[len / 2]);

	return;
}


// main
int main(void) {
	char str[21];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	printMiddleLetter(str, strlen(str));

	return 0;
}