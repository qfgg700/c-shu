#include <stdio.h>

int main()
{
    float a[13];
    float m=0.0;
    int i,j,x;

    for(i=0;i<12;i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=0;i<12;i++)
    {
        m+=a[i];
    }

    for(i=0;i<12;i++)
    {
        x=100*(a[i]/m);
        if(100*(a[i]/m)>=x+0.5) x++;

        printf("%2d",i+1);

        printf("(%2d%%) ",x);

        for(j=0;j<x;j++)
        {
            printf("#");

        }

        printf("\n");

    }
    return 0;
}
