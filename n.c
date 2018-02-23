#include<stdio.h>
void main()
{
int b,c;
printf("enter the b and c values");
scanf("%d %d",&b,&c);
a=b^c;
b=b^c;
a=b^c;
printf("the swapped values are %d  %d",b,c);
}
