#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch,ch1=0;
	printf("enter a character:");
	scanf("%c",&ch);
	ch1=toupper(ch);
	printf("%c lower to upper %c",ch,ch1);
	return 0;
}
