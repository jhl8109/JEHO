#include <stdio.h>

int main(void)
{
	
	while (1)
	{
		int menu = 0;
		printf("전화번호 관리\n\n");
		printf("1.등록\t 2.전체검색\t 3.특정인검색\t 4.종료\n\n");
		printf("메뉴선택 : ");
		scanf("%d", &menu);
		printf("\n");
		switch (menu)
		{
		case 1:
			if (PasswordCheck())
				return 0;
			break;
		case 2:
			printinfo();
			break;
		case 3:
			PersonalPrint();
			break;
		case 4:
			return 0;
		}
	}
	
}