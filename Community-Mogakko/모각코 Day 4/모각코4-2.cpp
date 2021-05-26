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

	printf("���� ���� �Է� : ");
	scanf("%d", &price);
	printf("���� �ݾ� �Է� : ");
	scanf("%d", &paid);
	while (paid < price || paid % 10 != 0) {
		if (paid < price)
			printf("���� ���� �̻��� �Է��ؾ� �մϴ�.(���� ���� : %d)\n", price);
		else if (paid % 10 != 0)
			printf("1�� ������ �����ϴ�. �ٽ� �Է��ϼ���.\n");

		printf("���� �ݾ� �Է� : ");
		scanf("%d", &paid);
	}

	int nCoin = calcChangeCoin(price, paid);
	printf("\n\n\t���� ���� [ %d �� ]\t���� �ݾ� [ %d ��]", price, paid);
	printf("\n\t\t�Ž����� [ %d �� ]", paid - price);
	printf("\n\t�� %d ���� ������ �Ž��������� ���������̽��ϴ�.", nCoin);

	return 0;
}