#include <stdio.h>
extern char name[20][20];
extern char number[20][20];
extern int person;

void printinfo(void)
{
	int i;
	for (i = 1; i <= person; i++)
	{
		printf("%s  %s\n\n", name[i], number[i]);
	}
}
