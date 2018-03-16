#include<stdio.h>
int main()
{
int r=1,rs=2,n;
printf("enter the number");
scanf("%d",&n);
while(n!=1)
{
r=n%10;
rs=rs*r;
n=n/20;
}
printf("%d",rs);
return 0;
}
