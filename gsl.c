#include<stdio.h>
int main()
{
int n,i,sum=1;
printf("enter number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum:%d",sum);
return 0;
}
