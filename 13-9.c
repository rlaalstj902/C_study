#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	struct student{
			char name[10];
			int age;
			};

			int i, cnt;

			printf("�Է��� �л� �� : ");
			scanf("%d", &cnt);

			struct student *p = malloc(sizeof(struct student)*cnt);
			for (i=0; i<cnt; i++)
			{
			char imsi[10];
			printf("�̸��� ���� �Է� : ");
			scanf("%s", imsi);
			strcpy((p+i)->name, imsi);
			scanf("%d", &(p+i)->age);
			}
			printf("\n\n-- �л� ��� --\n");
			for (i=0; i<cnt; i++)
{
	printf("�̸�:%s, ����:%d\n", (p+i)->name, (p+i)->age);
}
free(p);
}
