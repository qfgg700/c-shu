#include<stdio.h>

int main()
{

    int num;

    printf("Input n:");
    scanf("%d",&num);

    int count=0,sum=0;

    if(num<0) num=-num;

    while(num!=0)
    {
        sum+=num%10;
        count++;
        num/=10;
    }

    printf("count=%d,sum=%d",count,sum);

    return 0;

}
