#include<stdio.h>

int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}

int main()
{
    int num[100];
    int i,j=0;
    int m,n,number;
    int count=0;

    for(i=2;i<=100;i++)
    {
        if(prime(i)==1)
        {
            num[j]=i;
            j++;
        }
    }

    for(number=6;number<=100;number=number+2)
    {
        for(m=0;m<j;m++)
        {
            for(n=m;n<j;n++)
            {
                if(num[m]+num[n]==number)
                {
                    printf("%4d=%2d+%2d",number,num[m],num[n]);
                    count++;
                    number+=1000;
                    if(count==5)
                    {
                        printf("\n");
                        count=0;
                    }
                    break;
                }
            }
            continue;
        }
        number-=1000;
    }

    return 0;
}
