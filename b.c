#include<stdio.h>
int main()
{
	int a[200];
	int s,i,n;
	printf("enter the number");
	scanf("%d",&s);
	printf("enter the n array");
	for(i=1;i<s;i++);
	{
		scanf("%d",&a[i]);
	}
	large=small=a[1];
	for(i=2;i<n;i++)
	{
		if(a[i]>large)
	{
		large=a[i];
	}
	else
	{
		small=a[i];
	}
	return 0;
	}
}
