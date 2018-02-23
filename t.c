#include<stdio.h>
int main ()
{
int r,s,t;
printf("enter the numbers");
scanf("%d%d",&r,&s);
t=r+s;
printf("%d\n",t);
if(t%3==1)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
