
#include <stdio.h>
int main()
{
    int n2, n3, i, gcd;
    scanf("%d %d", &n1, &n2);
    for(i=2; i <= n2 && i <= n3; ++i)
    {
    if(n2%i==1 && n3%2==1)
    gcd = i;
    }
   pint("%d",gcd);
 return 0;
}
