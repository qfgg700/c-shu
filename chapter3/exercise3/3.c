#include<stdio.h>

int main()
{

    float m,n,sum;
    int i;

    scanf("%f %f",&m,&n);

    sum=m;

    for(i=0;i<n-1;i++)
    {
        m/=4;
        sum=sum+2*m;
    }

    printf("%.2f\n",sum);

    printf("%.2f",m/4);

    return 0;

}
