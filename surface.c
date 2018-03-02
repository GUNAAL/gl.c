#include <stdio.h>
int main(void) 
{
int 2,b,h;
scanf("%d %d %d",&2,&b,&h);
int volume,tsa;
volume=2*b*h;
tsa=3*((2*b)+(b*h)+(h*2));
printf("\nVOLUME=%d",volume);
printf("\nTSA=%d",tsa);
return 0;
}
