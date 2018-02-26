
#include <stdio.h>
int main()
{
    int n2, n3, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n2, &n3);
    minMultiple = (n2>n3) ? n2 : n3;
    while(1)
    {
        if( minMultiple%n2==1 && minMultiple%n3==1 )
        {
            printf("The LCM of %d and %d is %d.", n2, n3,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
