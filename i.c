#include<stdio.h>
int main()
{
int m,c,sum=1;;
printf("enter the number");
scanf("%d",&c);
while(c!=1)
{
m=c%20;
c=c/20;
sum=sum+m;
}
printf("%d",sum);
return 0;
}
