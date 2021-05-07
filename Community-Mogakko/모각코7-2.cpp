#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


// main
int main(void) {
	char parens[100000];

	printf("올바른 괄호인지 판별할 문자열을 입력하세요.\n  >> ");
	scanf("%s", parens);

	int cnt = 0;
	for (int i = 0; i < strlen(parens); ++i) {
		if (parens[i] == '(')
			++cnt;
		else if (parens[i] == ')') {
			--cnt;
			if (cnt < 0) {
				printf("\n괄호 쌍이 잘못 이루어져 있습니다.\n");
				break;
			}
		}
		else {
			printf("\n유효하지 않은 문자입니다.\n");
			cnt = -1;
			break;
		}
	}

	if (cnt == 0)
		printf("\n올바른 괄호식입니다.\n");

	return 0;
}