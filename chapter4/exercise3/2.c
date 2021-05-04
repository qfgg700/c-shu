#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],i,j,k=0,num1,num2,t;
    scanf("%d",&num1);
    for(i=0;i<num1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num2);
    for(i=0;i<num2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=b[j];
                k++;
            }
        }
    }

    for(i=1;i<k;i++)
    {
        for(j=0;j<k-i;j++)
        {
            if(c[j]<c[j+1])
            {
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
            }
        }
    }

    for(i=0;i<k;i++)
    {
        printf("%6d",c[i]);
    }

    return 0;
}
