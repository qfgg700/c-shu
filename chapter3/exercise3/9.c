#include<stdio.h>

int figure(int a)
{
    int count=0;

    while(a!=0)
    {
        a/=10;
        count++;
    }

    return count;

}

int LastFewNumber(int num,int figure)
{
    int target,i,temp,sign=10;

    target=num%10;
    num/=10;

    for(i=1;i<figure;i++)
    {
        temp=num%10;

        target=target+temp*sign;

        num/=10;

        sign*=10;

        //printf("%d %d %d\n",temp,target,num);
    }

    //printf("%d %d",target,figure);

    return target;

}

int main()
{
    int m,n,target;
    int i,a,b,weishu,count=0;

    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++)
    {
        a=i;
        b=a*a;
        weishu=figure(a);
        target= LastFewNumber(b,weishu);

        if(target==a)
        {
            printf("%d\n",target);
            count++;
        }
    }

    if(count==0) printf("No Answer");

    return 0;

}
