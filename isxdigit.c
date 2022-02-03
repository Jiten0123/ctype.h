#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(isxdigit(ch))
	{
		printf("%c is hexadecimal value",ch);
	}
	else
	{
		printf("%c is not hexadecimal value",ch);
	}
	return 0;
}
