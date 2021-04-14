#include <stdio.h>

int main()
{
    int num,i;

    printf("Input an integer:");
    scanf("%d",&num);

    printf("%d=",num);

    for(i=2;i<num;i++)
    {
        while(num!=i)
        {
            if(num%i==0)
            {
                printf("%d*",i);
                num/=i;
            }
            else break;
        }
    }

    printf("%d",num);

    return 0;

}
