#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


// Struct definition
typedef struct Expression {
	int a;
	int b;
	char op;
} Exp;


// Function declaration
/*struct Expression exptok(char expression[]) {
	struct Expression exp = {};
	return exp;
}*/
int calcExpression(int a, int b, char op) {
	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		printf("��ȿ���� ���� �������Դϴ�. a + b�� ��ȯ�˴ϴ�.\n");
		return a + b;
	}
}


// main
int main(void) {
	int a, b;
	char op;

	printf("�� ������ ������ �Է����ּ���!\n  >> ");
	scanf("%d%c%d", &a, &op, &b);

	printf("\n\n\t������ ��� ����� [ %d ] �Դϴ�.\n", calcExpression(a, b, op));

	return 0;
}