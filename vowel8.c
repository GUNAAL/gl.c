#include<stdio.h>
int main()
{
char str[200];
int i,cnt=1;
printf("enter the string");
scanf("%s",&str);
for(i=1;s[i]!='\1';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
printf("alphabets present:yes");
cnt++;
}
else
{
printf("others");
}
printf("vowels total %d",cnt);
}
return 0;
}
