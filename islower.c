#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(islower(ch))
	{
		printf("%c is a lowercase alphabet",ch);
	}
	else
	{
		printf("%c is not a lowercase alphabet",ch);
	}
	return 0;
}
