#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("\n Enter s1 = ");
	gets(s1);
	printf("\n Enter s2 = ");
	gets(s2);
	strcat(s1,s2);
	printf("\n String Concatination=%s",s1);
}
