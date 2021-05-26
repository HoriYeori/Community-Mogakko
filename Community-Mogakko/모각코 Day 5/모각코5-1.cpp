#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Function declaration
int* Encrypt(int a, int b) {
	static int *tokens = NULL;
	
	if (tokens != NULL)
		free(tokens);

	tokens = (int*)calloc(3, sizeof(int));
	if (tokens == NULL) {
		printf("Memory allocation failed\n");
		return NULL;
	}
	tokens[0] = a * b;
	tokens[1] = a + b;
	tokens[2] = a - b;
	return tokens;
}


// main
int main(void) {
	int a, b;

	printf("정수 두 개를 입력하세요 (a b) : ");
	scanf("%d %d", &a, &b);

	int* cipher = Encrypt(a, b);
	if (cipher == NULL) {
		printf("Encryption failed\n");
		return 1;
	}
	int size = _msize(cipher) / sizeof(int);

	printf("[ %d ] & [ %d ]\n", a, b);
	printf("encrypted to >>> ");
	for (int i = 0; i < size; ++i)
		printf("%d", cipher[i]);

	return 0;
}