#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	int nStations = 4;
	int nPassengers = 0;

	int nBoard, nAlight;
	int maxBoarding = 0;
	for (int i = 0; i < nStations; ++i) {
		printf("%d번째 역 [하차인원] [승차인원]\n : ", i + 1);
		scanf("%d %d", &nAlight, &nBoard);
		
		nPassengers -= nAlight;
		if (nPassengers < 0) {
			printf("잘못된 승하차 인원수입니다.\n");
			return 1;
		}
		else {
			nPassengers += nBoard;

			if (maxBoarding < nPassengers)
				maxBoarding = nPassengers;
		}
	}

	printf("\n\t%d개 역 통과 중 최대 승차 인원수 = %d", nStations, maxBoarding);

	return 0;
}