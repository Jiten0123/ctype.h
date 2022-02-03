#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch,ch1=0;
	printf("enter a character:");
	scanf("%c",&ch);
	ch1=tolower(ch);
	printf("%c upper to lower %c",ch,ch1);
	return 0;
}
