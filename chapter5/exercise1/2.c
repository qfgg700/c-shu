#include<stdio.h>

double fact(int i)
{
    int j;
    double total=1;
    for(j=i;j>=1;j--)
    {
        total*=j;
    }
    return total;
}

int main()
{
    int i,n;
    double total;
    for(i=1;i<=5;i++)
    {
        total=fact(i);
        printf("%d!=%.0f\n",i,total);
    }
    return 0;
}
