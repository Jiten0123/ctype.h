#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ispunct(ch))
	{
		printf("%c is punctuator",ch);	//all special symbols
	}
	else
	{
		printf("%c is not punctuator",ch);
	}
	return 0;
}
