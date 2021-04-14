#include<stdio.h>

int main()
{

    int day,rich=0,poor1,i;
    float poor=0,money=0.01;

    scanf("%d",&day);

    rich=day*100000;

    for(i=0;i<day;i++)
    {
        poor+=money;
        money*=2;
    }

    poor1=(int)poor;

    printf("%d\n%d",rich,poor1);

    return 0;

}
