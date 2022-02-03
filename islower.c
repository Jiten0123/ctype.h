#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(isupper(ch))
	{
		printf("%c is an uppercase alphabet",ch);
	}
	else
	{
		printf("%c is not an uppercase alphabet",ch);
	}
	return 0;
}
