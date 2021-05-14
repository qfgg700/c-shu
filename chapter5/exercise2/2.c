#include<stdio.h>

static int a[5],b[5],c[5];

int mix(int a[],int b[],int c[])
{
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                printf("%4d",b[j]);
                continue;
            }
        }
    }
    return k;
}

int main()
{
    int i,j;

    printf("Please Enter Array A,5 digits:");
    for(i=0;i<5;i++)
    {
        scanf("%d",a+i);
    }
    printf("Please Enter Array B,5 digits:");
    for(i=0;i<5;i++)
    {
        scanf("%d",b+i);
    }

    printf("A B intersection is:");
    j=mix(a,b,c);

    return 0;
}
