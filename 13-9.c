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

			printf("입력할 학생 수 : ");
			scanf("%d", &cnt);

			struct student *p = malloc(sizeof(struct student)*cnt);
			for (i=0; i<cnt; i++)
			{
			char imsi[10];
			printf("이름과 나이 입력 : ");
			scanf("%s", imsi);
			strcpy((p+i)->name, imsi);
			scanf("%d", &(p+i)->age);
			}
			printf("\n\n-- 학생 명단 --\n");
			for (i=0; i<cnt; i++)
{
	printf("이름:%s, 나이:%d\n", (p+i)->name, (p+i)->age);
}
free(p);
}
