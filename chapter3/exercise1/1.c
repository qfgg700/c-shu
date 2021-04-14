#include <stdio.h>

int main()
{
    float x;
    int y;

    printf("Enter a number:");
    scanf("%f",&x);

    if(x>0) y=1;
    else if(x==0) y=0;
    else y=-1;

    printf("y=%d",y);

    return 0;

}
