#include<stdio.h>
int main()
{
	int n,r,g;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the values of r and g");
	scanf("%d%d",&r,&g);
	if(n>g&&n<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
 
	}
	return 0;
	}
