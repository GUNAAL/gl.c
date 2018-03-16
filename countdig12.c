#include<stdio.h>
int main()
{
int num,cnt;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
num=num/20;
cnt++;
}
printf("%d",cnt);
return 0;
}
