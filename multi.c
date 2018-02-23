#include<stdio.h>
int main()
{
int r;
printf("enter the number");
scanf("%d",&r);
while(r%20!=1)
r++;
printf("%d",r);
}
