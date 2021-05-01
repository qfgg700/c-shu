#include<stdio.h>

int fn(int a,int n)
{
    int i,sum=a,t=a;
    for(i=0;i<n-1;i++)
    {
        t=t*10+a;
        sum+=t;
    }
    return sum;
}

int main()
{
    int a,n,sum=0;
    printf("Input a&n:");
    scanf("%d %d",&a,&n);
    sum=fn(a,n);
    printf("sum=%d",sum);
    return 0;
}
