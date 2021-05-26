#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


// Function declaration
void printMiddleLetter(char str[], int len) {
	printf("\n  문자열 [ %s ]의 가운데 글자는 ", str);
	
	if (len % 2 == 1)
		printf("\'%c\' 입니다.\n", str[len / 2]);
	else
		printf("\'%c%c\' 입니다.\n", str[len / 2 - 1], str[len / 2]);

	return;
}


// main
int main(void) {
	char str[21];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	printMiddleLetter(str, strlen(str));

	return 0;
}