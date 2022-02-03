#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(isdigit(ch))
	{
		printf("%c is a digit",ch);
	}
	else
	{
		printf("%c is not a digit",ch);
	}
	return 0;
}
