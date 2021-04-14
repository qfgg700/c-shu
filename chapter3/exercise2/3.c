#include <stdio.h>

int main()
{
    int i,count=0;

    for(i=1;i<=1000;i++)
    {
        if(i%3==1 && i%5==2 && i%7==3)
        {
            printf("%5d",i);
            count++;
        }
        if(count==5)
        {
            printf("\n");
            count=0;
        }
    }

    return 0;

}
