#include<stdio.h>
#include<math.h>

int main()

{

    double sum=0,x,t;
    int n,i;

    scanf("%lf %d",&x,&n);

    sum=t=x;

    for(i=2;i<=n;i++)
    {
        t=(t*(-1)*x*x)/((2*i-2)*(2*i-1));
        sum+=t;
    }

    printf("%.8lf",sum);

    return 0;

}

