#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// Function declaration
int calcChangeCoin(const int price, const int paid) {
	int nCoin = 0;
	int change = paid - price;
	
	nCoin += change / 500;
	nCoin += (change % 500) / 100;
	nCoin += (change % 100) / 50;
	nCoin += (change % 50) / 10;
	return nCoin;
}


// main
int main(void) {
	int price, paid;

	printf("물건 가격 입력 : ");
	scanf("%d", &price);
	printf("지불 금액 입력 : ");
	scanf("%d", &paid);
	while (paid < price || paid % 10 != 0) {
		if (paid < price)
			printf("물건 가격 이상을 입력해야 합니다.(물건 가격 : %d)\n", price);
		else if (paid % 10 != 0)
			printf("1원 단위는 없습니다. 다시 입력하세요.\n");

		printf("지불 금액 입력 : ");
		scanf("%d", &paid);
	}

	int nCoin = calcChangeCoin(price, paid);
	printf("\n\n\t물건 가격 [ %d 원 ]\t지불 금액 [ %d 원]", price, paid);
	printf("\n\t\t거스름액 [ %d 원 ]", paid - price);
	printf("\n\t총 %d 개의 동전을 거스름돈으로 돌려받으셨습니다.", nCoin);

	return 0;
}