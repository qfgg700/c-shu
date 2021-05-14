#include<stdio.h>

int search(int a[],int n,int x)
{
    int i,sign;

    for(i=0;i<n;i++)
    {
        if(a[i]==x) return i;
    }

    return -1;
}

int main()
{
    int a[10],n,x,i,sign;

    printf("Input n:");
    scanf("%d",&n);
    printf("Input %d integers:",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }

    printf("Input x:");
    scanf("%d",&x);

    sign=search(a,n,x);
    if(sign==-1)
    {
        printf("Not Found");
    }
    else printf("index=%d",sign);

    return 0;
}
