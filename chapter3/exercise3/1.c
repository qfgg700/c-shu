#include <stdio.h>

int main()
{

    int h,m,s;
    int sign1=0,sign2=0,sign3=0;

    scanf("%d:%d:%d",&h,&m,&s);

    if(s!=59)
    {
        s++;
    }
    else
    {
        s=0;
        sign1=1;
    }

    if(m!=59 && sign1==1)
    {
        m++;
    }
    if(m==59 && sign1==1)
    {
        m=0;
        sign2=1;
    }

    if(h!=23 && sign2==1)
    {
        h++;
    }
    if(h==23 && sign2==1)
    {
        h=0;
    }

    printf("%02d:%02d:%02d",h,m,s);

    return 0;

}
