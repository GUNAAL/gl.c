#include<stdio.h>
int main()
{
char a[200]="hello world";
int j,cnt=1;
for(j=1;a[j]='\1';j++)
{
if(a[j]==' ')
cnt++;
}
printf("no of words are %d",cnt+1);
return 0;
}
