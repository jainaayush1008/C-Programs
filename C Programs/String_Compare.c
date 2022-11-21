#include<stdio.h>
main()
{
	//char s1[20]="Aayush",s2[20]="Aayush";//Same string return = 0
	char s1[20]="Aj",s2[20]="Aayush";//string>string2 = 1
	int n;
	n=strcmp(s1,s2);
	printf("\n n=%d",n);
	
}
