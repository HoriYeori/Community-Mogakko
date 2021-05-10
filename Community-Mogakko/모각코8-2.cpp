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

	printf("����� �� �м��� ������ �Է����ּ���.\n\n");
	printf("  * �м��� \'(����)/(�и�)\'�� ���·� ǥ���մϴ�. (��: 5���� 3(���ڰ� 3, �и� 5) --> 3/5)\n");
	printf("  ** ���� ������ \'5���� 3 ���ϱ� 7���� 2\'�� ��� �Է� ���� ������ �����ϴ� - 3/5+2/7\n\n");

	printf("  ���� �Է� >> ");
	gets_s(exp, sizeof(exp));
	
	char op = parse_fraction_expression(exp, strlen(exp), fractions);	// parse expression and get fractions and operator
	Fraction res = calc_fractions(fractions, op);

	if (res.denom == 0)
		printf("Invalid operation\n");
	else
		printf("\n\n\t ��� ��� : %d / %d (%d���� %d)\n", res.num, res.denom, res.denom, res.num);

	return 0;
}