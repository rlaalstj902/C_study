#include<stdio.h>

void main()
{
	int a, b, c;
	int result;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);

	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);

	printf("����° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &c);

	result = a + b + c;
	printf(" %d + %d + %d = %d \n", a, b, c, result);

	result = a - b - c;
	printf(" %d - %d - %d = %d \n", a, b, c, result);

	result = a * b * c;
	printf(" %d * %d * %d = %d \n", a, b, c, result);

	result = a / b / c;
	printf(" %d / %d / %d = %d \n", a, b, c, result);
}
