#include <stdio.h>

int main()
{
    int num,num1=0,t,t2;

    scanf("%d",&num);

    t2=num;

    while(num!=0)
    {
        t=num%10;
        num/=10;
        num1=num1*10+t;
    }

    if(t2==num1) printf("%d�ǻ���",num1);
    else printf("%d���ǻ���",t2);

    return 0;

}

