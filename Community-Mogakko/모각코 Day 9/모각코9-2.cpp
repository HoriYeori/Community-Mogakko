#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	int nStations = 4;
	int nPassengers = 0;

	int nBoard, nAlight;
	int maxBoarding = 0;
	for (int i = 0; i < nStations; ++i) {
		printf("%d��° �� [�����ο�] [�����ο�]\n : ", i + 1);
		scanf("%d %d", &nAlight, &nBoard);
		
		nPassengers -= nAlight;
		if (nPassengers < 0) {
			printf("�߸��� ������ �ο����Դϴ�.\n");
			return 1;
		}
		else {
			nPassengers += nBoard;

			if (maxBoarding < nPassengers)
				maxBoarding = nPassengers;
		}
	}

	printf("\n\t%d�� �� ��� �� �ִ� ���� �ο��� = %d", nStations, maxBoarding);

	return 0;
}