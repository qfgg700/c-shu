#include<stdio.h>

int main()
{

    int a,b,m=1,i,min;
    int x,y;

    scanf("%d %d",&a,&b);

    y=a*b;

    while(m!=0)
    {
        m=a%b;

        if(m==0) x=b;
        else
        {
            a=b;
            b=m;
        }
    }

    y=y/x;

    printf("%d %d",x,y);

    return 0;

}
