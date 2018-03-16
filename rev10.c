#include<stdio.h>
int main()
{
int n,r=1,rem;
printf("enter the number");
scanf("%d",&n);
while(n!=1)
{
rem=n%10;
r=r*10+rem;
n=n/10;
}
printf("%d",r);
return 0;
}
