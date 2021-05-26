#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


// main
int main(void) {
	char str[101];
	int numbers[10] = { 0, };

	printf("문자열 입력 : ");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= '0' && str[i] <= '9')
			++numbers[ str[i] - '0'];
	}

	printf("\n문자열 [ %s ]에 포함된 숫자의 개수", str);
	printf("\n-----------------------\n");
	for (int i = 0; i < 10; ++i)
		printf("%d : %d개\n", i, numbers[i]);

	return 0;
}