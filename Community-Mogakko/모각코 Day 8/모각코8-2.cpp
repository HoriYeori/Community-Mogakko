#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// struct definition
typedef struct Fraction {
	int num; // numerator
	int denom; // denominator
} Fraction;


// Function declaration
unsigned int GCD(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	while (a % b != 0) {
		int temp = a;
		a = b;
		b = temp % b;
	}

	return b;
}


char parse_fraction_expression(char *exp, unsigned int size, struct Fraction fractions[]) {
	char* start = exp;
	char* end = start;
	char op = NULL;
	char *buf = (char*)calloc(size, sizeof(char)); // to contain parsed numeric value for atoi

	for (int i = 0; i < 2; ++i) {
		int length = 0;

		while (*end != NULL && *end != '/') {	// parse numerator
			++end;
			++length;
		}
		strncpy(buf, start, length);
		buf[length] = '\0';
		fractions[i].num = atoi(buf);

		++end;
		start = end;

		length = 0;

		while (*end != NULL
			&& *end != '+' && *end != '-' && *end != '*' && *end != '/') {	// parse denominator
			++end;
			++length;
		}
		if (*end != NULL)
			op = *end;	// get operator
		strncpy(buf, start, length);
		buf[length] = '\0';
		fractions[i].denom = atoi(buf);

		++end;
		start = end;
	}

	return op;
}


struct Fraction calc_fractions(struct Fraction fractions[], char op) {
	struct Fraction res;

	// reduction to common denom
	if (fractions[0].denom != fractions[1].denom) {
		int temp = fractions[0].denom;
		fractions[0].denom *= fractions[1].denom;
		fractions[0].num *= fractions[1].denom;

		fractions[1].denom *= temp;
		fractions[1].num *= temp;
	}
	res.denom = fractions[0].denom;

	switch (op) {
	case '+':
		res.num = fractions[0].num + fractions[1].num;
		break;

	case '-':
		res.num = fractions[0].num - fractions[1].num;
		break;

	case '*':
		res.num = fractions[0].num * fractions[1].num;
		res.denom *= res.denom;
		break;

	case '/': {
		int temp = fractions[1].denom;
		fractions[1].denom = fractions[1].num;
		fractions[1].num = temp;
		res = calc_fractions(fractions, '*');
		break;
	}

	default:
		printf("Invalid operator\n");
		res = { 0, 0 };
	}

	// reduction
	if (res.denom != 0) {
		unsigned int gcd = GCD(abs(res.num), abs(res.denom));
		res.num /= gcd;
		res.denom /= gcd;
	}

	return res;
}


// main
int main(void) {
	char exp[101];
	Fraction fractions[2];

	printf("계산할 두 분수의 계산식을 입력해주세요.\n\n");
	printf("  * 분수는 \'(분자)/(분모)\'의 형태로 표현합니다. (예: 5분의 3(분자가 3, 분모가 5) --> 3/5)\n");
	printf("  ** 만약 수식이 \'5분의 3 더하기 7분의 2\'일 경우 입력 예는 다음과 같습니다 - 3/5+2/7\n\n");

	printf("  수식 입력 >> ");
	gets_s(exp, sizeof(exp));
	
	char op = parse_fraction_expression(exp, strlen(exp), fractions);	// parse expression and get fractions and operator
	Fraction res = calc_fractions(fractions, op);

	if (res.denom == 0)
		printf("Invalid operation\n");
	else
		printf("\n\n\t 계산 결과 : %d / %d (%d분의 %d)\n", res.num, res.denom, res.denom, res.num);

	return 0;
}