#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(isalnum(ch))
	{
		printf("%c is an alphanumeric value",ch);
	}
	else
	{
		printf("%c is not an alphanumeric value",ch);
	}
	return 0;
}
