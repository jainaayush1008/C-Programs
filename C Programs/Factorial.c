#include<stdio.h>
void add();
void sub();
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
  sub()
}
void add()
{
  int a,b,sum;
  printf("\n Enter 2 Number = ");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("\n Addition Of Two Number is = ",sum);
} 
void sub()
{
  int a,b,c;
  printf("\n Enter 2 Number = ");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("\n Addition Of Two Number is = ",c);
}
