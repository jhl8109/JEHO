#include <stdio.h>
extern char name[20][20];
extern char number[20][20];
extern int person;

void PersonalPrint(void)
{
	char inputname[20];
	printf("검색할 이름 : ");
	scanf("%s", inputname);
	int index = 0;
	for (int i = 1; i <= person; i++)
	{
		if (!strcmp(inputname,name[i]))
		{
			printf("\n%s  %s\n\n", name[i], number[i]);
			return 0;
		}
	}
	printf("일치하는 정보의 사람이 없습니다.\n\n");
	
}