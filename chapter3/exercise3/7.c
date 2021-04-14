#include<stdio.h>

int main()
{

    int n,m;
    int i,j,k,count=0,sum=0,flag=1;

    while(1)
    {
        scanf("%d",&n);

        if(n==0) break;

        for(i=0;i<=n/1;i++)
        {
            for(j=0;j<=n/2;j++)
            {
                for(k=0;k<=n/5;k++)
                {
                    sum=i*1+2*j+5*k;
                    if(sum==n) count++;
                }
            }

            sum=0;
        }

        printf("Case %d:%d\n",flag,count);

        flag++;
        count=0;
        sum=0;

    }

    return 0;

}
