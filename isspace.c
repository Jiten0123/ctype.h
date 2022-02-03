#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(isspace(ch))
	{
		printf("%c is space",ch);
	}
	else
	{
		printf("%c is not space",ch);
	}
	return 0;
}
