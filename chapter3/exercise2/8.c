#include <stdio.h>

int main()
{
    int a;
    int i,j,k,count=1,m;

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        if(i==a-1) printf("*");
        else printf("* ");
    }

    a--;

    printf("\n");

    for(j=a;j>=2;j--)
    {
        for(k=0;k<count;k++)
        {
            printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            if(i==1) printf("*");
            else if(i==2*j-1) printf("*");
            else printf(" ");
        }

        printf("\n");

        count++;
    }
    for(m=0;m<a;m++)
    {
        printf(" ");
    }

    printf("*");

    printf("\n");

    return 0;

}
