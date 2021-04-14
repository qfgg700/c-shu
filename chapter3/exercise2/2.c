#include <stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    int i,j,k,count=0,star;

    for(i=num;i>0;i--)
    {
        star=2*i-1;

        for(j=0;j<count;j++)
        {
            printf(" ");
        }
        for(j=0;j<star;j++)
        {
            printf("*");
        }

        count++;

        printf("\n");
    }

    return 0;

}
