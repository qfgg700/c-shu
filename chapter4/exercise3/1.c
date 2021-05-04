#include<stdio.h>
int main()
{
    int num,a[100],i,t,j,k=1,max=0,m=0;
    int digit[100],count[100]={0},target[100];
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    digit[0]=a[0];
    for(i=1;i<num;i++)
    {
        if(a[i]!=a[i-1])
        {
            digit[k]=a[i];
            k++;
        }
    }

    for(i=0;i<k;i++)
    {
        for(j=0;j<num;j++)
        {
            if(digit[i]==a[j]) count[i]++;
        }
    }

    for(i=0;i<k;i++)
    {
        if(count[i]>max) max=count[i];
    }

    for(i=0;i<k;i++)
    {
        if(count[i]==max)
        {
            target[m]=i;
            m++;
        }
    }

    for(i=0;i<m;i++)
    {
        printf("%d %d\n",digit[target[i]],count[target[i]]);
    }

    return 0;
}
