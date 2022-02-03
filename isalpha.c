#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("%c is an alphabet value",ch);
	}
	else
	{
		printf("%c is not an alphabet value",ch);
	}
	return 0;
}
