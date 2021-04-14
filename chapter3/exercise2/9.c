#include<stdio.h>

int main()
{
    int a,n,i,j,t;

    printf("Input a&n:");
    scanf("%d %d",&a,&n);

    int s=0;

    s=a;
    t=a;

    for(i=0;i<n-1;i++)
    {
        t=t*10+a;
        s+=t;
    }

    printf("s=%d",s);

    return 0;

}

