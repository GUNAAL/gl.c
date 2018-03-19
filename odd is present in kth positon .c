#include<stdio.h>

int main()
{
	 int k,m[6],i;
	 for(i=1;i<=5;i++)
	 {
	 scanf("%d",&m[i]);
	}
	scanf("%d ",&k);
		if(m[k]%2!=0)
		{
	printf("%d",m[k]);
	}
	else
	printf("no odd no in the given position");
	return 0;
}
