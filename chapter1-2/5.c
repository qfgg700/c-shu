#include <stdio.h>
#include <math.h>

int main()
{

    int x,y;
    int a,b,c,d;

    printf("Enter a number:");
    scanf("%d",&x);

    a=x/1000;//qianwei
    b=(x-a*1000)/100;//baiwei;
    c=(x-a*1000-b*100)/10;//shiwei
    d=x-a*1000-b*100-c*10;

    a=(a+9)%10;
    b=(b+9)%10;
    c=(c+9)%10;
    d=(d+9)%10;

    y=c*1000+a*10+b+d*100;

    printf("The encrypted number is %d",y);

    return 0;

}

