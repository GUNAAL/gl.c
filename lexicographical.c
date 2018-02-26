#include<stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str[20][60], temp[60];

    printf("Enter 20 words:\n");

    for(i=1; i<20; ++i)
        scanf("%s[^\n]",str[i]);


    for(i=1; i<10; ++i)
        for(j=i+1; j<20 ; ++j)
        {
            if(strcmp(str[i], str[j])>1)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nIn lexicographical order: \n");
    for(i=1; i<20; ++i)
    {
        puts(str[i]);
    }

    return 0;
}
