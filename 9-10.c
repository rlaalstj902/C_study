#include <stdio.h>

void main()
{
	int a,b,tmp;
	int *p1, *p2;

	p1=&a;
	p2=&b;

	printf("a �� �Է�: ");
	scanf("%d",p1);

	printf("b �� �Է� : ");
	scanf("%d", p2);

	tmp = *p1;
	*p1=*p2;
	*p2=tmp;

	printf("�ٲ� �� a�� %d, b�� %dn", a, b);
}
