#include <stdio.h>
#include <string.h>

void PersonAdd();
void PasswordCheck();

char name[20][20];
char number[20][20];
int person;

void PasswordCheck(void)
{
	char password[20] = "qwer1234";
	char inputpassword[20];
	static int passwordcount;
	printf("비밀번호 : ");
	scanf("%s", inputpassword);
	if (!strcmp(inputpassword,password))
	{
		passwordcount = 0;
		PersonAdd();
	}
	else
	{
		while (passwordcount < 3)
		{
			passwordcount++;
			printf("비밀번호(%d회 실패) : ",passwordcount);
			scanf("%s", inputpassword);
			if (!strcmp(inputpassword, password))
			{
				passwordcount = 0;
				PersonAdd();
				return 0;
			}
		}
		printf("비밀번호(%d회 실패) : 등록할 수 없음!\n\n", passwordcount);
		printf("프로그램을 종료합니다.\n");
		return 1;
	}
	}
	

void PersonAdd(void)
{
	char inputname[20];
	char inputnumber[20];
	static int count;
	count++;
	person = count;
	printf("등록할 이름 : ");
	scanf("%s", inputname);
	printf("전화번호 : ");
	scanf("%s", inputnumber);
	printf("%s 정보 등록 완료!\n\n",inputname);
	strcpy(name[count],inputname);
	strcpy(number[count], inputnumber);
	return 0;
}