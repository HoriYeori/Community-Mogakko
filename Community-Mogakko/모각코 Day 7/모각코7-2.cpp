#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


// main
int main(void) {
	char parens[100000];

	printf("�ùٸ� ��ȣ���� �Ǻ��� ���ڿ��� �Է��ϼ���.\n  >> ");
	scanf("%s", parens);

	int cnt = 0;
	for (int i = 0; i < strlen(parens); ++i) {
		if (parens[i] == '(')
			++cnt;
		else if (parens[i] == ')') {
			--cnt;
			if (cnt < 0) {
				printf("\n��ȣ ���� �߸� �̷���� �ֽ��ϴ�.\n");
				break;
			}
		}
		else {
			printf("\n��ȿ���� ���� �����Դϴ�.\n");
			cnt = -1;
			break;
		}
	}

	if (cnt == 0)
		printf("\n�ùٸ� ��ȣ���Դϴ�.\n");

	return 0;
}