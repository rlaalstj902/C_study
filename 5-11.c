#include <stdio.h>

void main()
{
	int a,b;
	char A;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d" "%c" "%d", &a, &A, &b);

	switch(A)
	{
		case '+' :
			printf("%d  +  %d  =  %d  �Դϴ�.\n", a,b, a + b);
			break;
		case '-' :
			printf("%d  -  %d  =  %d  �Դϴ�.\n", a,b, a - b);
			break;
		case '*' :
			printf("%d  *  %d  =  %d  �Դϴ�.\n", a,b, a * b);
			break;
		case '/' :
			printf("%d  /  %d  =  %d  �Դϴ�,\n", a,b, a / b);
			break;
		default :
		       printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}	

		
