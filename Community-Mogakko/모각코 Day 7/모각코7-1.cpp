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
		printf("유효하지 않은 연산자입니다. a + b가 반환됩니다.\n");
		return a + b;
	}
}


// main
int main(void) {
	int a, b;
	char op;

	printf("두 정수의 계산식을 입력해주세요!\n  >> ");
	scanf("%d%c%d", &a, &op, &b);

	printf("\n\n\t수식의 계산 결과는 [ %d ] 입니다.\n", calcExpression(a, b, op));

	return 0;
}