#include <stdio.h>

int main()
{
    int i,count=0,num;

    for(num=2;num<=1000;num++)
    {
        for(i=1;i<num;i++)
        {
            if(num%i==0)
            {
                count+=i;
            }
        }
        if(num==count)
        {
            printf("%6d",num);
        }
        count=0;
    }

    return 0;

}
