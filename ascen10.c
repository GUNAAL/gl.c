#include<stdio.h>
int main()
{
int a[10],i,num=2;
printf("enter the number");
for(i=1;i<=num;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
}
}
return 0;
}
