#define _CRT_SECURE_NO_WARNINGS
#define UP		0
#define DOWN	1


#include <stdio.h>
#include <stdlib.h>


// Function declaration
void findNthFraction(int n) {
	int fraction[2] = { 1, 1 };
	int phase = 1;
	char direction = UP;

	for (int i = 1; i < n; ++i) {
		if (direction == UP) {
			if (fraction[1] == phase) {
				++phase;
				++fraction[1];
				direction = DOWN;
				continue;
			}
			--fraction[0];
			++fraction[1];
		}
		else {	// direction == DOWN
			if (fraction[0] == phase) {
				++phase;
				++fraction[0];
				direction = UP;
				continue;
			}
			++fraction[0];
			--fraction[1];
		}
	}

	printf("\n\n\t%d번째 분수는 %d/%d 입니다.\n", n, fraction[0], fraction[1]);
}


// main
int main(void) {
	int n;

	printf("n? >> ");
	scanf("%d", &n);

	findNthFraction(n);

	return 0;
}