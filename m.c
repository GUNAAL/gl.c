
#include<stdio.h>
int main()
{
int a,b,t;
a=20;
b=30;
{
printf("elements before swapping");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("elements after swapping:%d %d",a,b);
}
return 0;
}
