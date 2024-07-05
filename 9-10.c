#include <stdio.h>

void main()
{
	int a,b,tmp;
	int *p1, *p2;

	p1=&a;
	p2=&b;

	printf("a 값 입력: ");
	scanf("%d",p1);

	printf("b 값 입력 : ");
	scanf("%d", p2);

	tmp = *p1;
	*p1=*p2;
	*p2=tmp;

	printf("바뀐 값 a는 %d, b는 %dn", a, b);
}
