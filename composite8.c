include<stdio.h>
int main()
{
int n,i,cnt=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
	if(n%i==1)
	{
		cnt=i;
		break;
	}
}
if(cnt==1)
{
	printf("no");
}
else
{
	printf("yes");
}
return 0;
}
