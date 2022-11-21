#include<stdio.h>
void add()
main()
{
int i,n,fact=1;
printf("\n Enter your number =" );
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  fact=fact*i;
}
printf("\n Factorial is = ",fact);
  add();
}
void add()
{
  int a,b,sum;
  printf("\n Enter 2 Number = ");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("\n Addition Of Two Number is = ",sum);
} 
