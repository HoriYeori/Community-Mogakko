#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


// Function declaration
void printPascalTriangle(int lines) {
	// Memory allocation
	int** triangle = (int**)calloc(lines, sizeof(int*));
	for (int i = 0; i < lines; ++i)
		triangle[i] = (int*)calloc(lines, sizeof(int));

	// Making Pascal's triangle
	for (int i = 0; i < lines; ++i) {
		for (int j = 0; j <= i; ++j) {
			if (j == 0 || i == j)
				triangle[i][j] = 1;
			else
				triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
		}
	}

	// Show made Pascal's triangle
	printf("\n\nũ�� %d�� Pascal's Triangle >>>\n\n", lines);
	for (int i = 0; i < lines; ++i) {
		for (int j = 0; j < lines; ++j) {
			if (triangle[i][j] != 0)
				printf("%3d ", triangle[i][j]);
			else
				break;
		}
		printf("\n");
	}

	// Memory free stage
	for (int i = 0; i < lines; ++i)
		free(triangle[i]);
	free(triangle);
}


// main
int main(void) {
	int lines;

	printf("����� �Ľ�Į�� �ﰢ�� �� ���� �Է����ּ���.\n");
	printf("  >>> �Ľ�Į�� �ﰢ�� ũ�� : ");
	scanf("%d", &lines);

	printPascalTriangle(lines);

	return 0;
}