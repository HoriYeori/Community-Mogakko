#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


// main
int main(void) {
	unsigned int width, length, height; // ���� ���� ����

	printf("���� : "); scanf("%d", &width);
	printf("���� : "); scanf("%d", &length);
	printf("���� : "); scanf("%d", &height);

	// �������� ������ �𼭸��� ��ġ�� ��ϸ� �� ���� ��ĥ��
	// �𼭸� ���� ����:4 ����:4 ����:4
	printf("�� �鸸 ��ĥ�Ǵ� ������ü ����� ����");
	printf(" %d�� �Դϴ�.\n", (width - 2) * 4 + (length - 2) * 4 + (height - 2) * 4);

	return 0;
}