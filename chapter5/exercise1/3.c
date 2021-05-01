#include<stdio.h>

int is(int a)
{
    int b=0,t,i,c;
    c=a;
    while(a)
    {
        t=a%10;
        b=t*t*t+b;
        a/=10;
    }
    if(c==b) return 1;
    else return 0;
}

int main()
{
    int m,n,i;

    printf("Input m:");
    scanf("%d",&m);
    printf("Input n:");
    scanf("%d",&n);

    for(i=m;i<=n;i++)
    {
        if(is(i)) printf("%d\n",i);
    }
    return 0;
}
