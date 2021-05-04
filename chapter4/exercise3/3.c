#include<stdio.h>
int main()
{
    int number[5],score[5],i,j,t,sum=0,max=0,min=99,min_sign;
    double avg,minus[5],minus_min=99;
    for(i=0;i<5;i++)
    {
        scanf("%d %d",&number[i],&score[i]);
        sum+=score[i];
    }
    for(i=0;i<5;i++)
    {
        if(score[i]>max) max=score[i];
        if(score[i]<min) min=score[i];
    }
    sum=sum-max-min;
    avg=(double)sum/3;
    printf("%.2f\n",avg);
    for(i=0;i<5;i++)
    {
        minus[i]=(double)score[i]-avg;
        if(minus[i]<0) minus[i]=-minus[i];
    }
    for(i=0;i<5;i++)
    {
        if(minus[i]<minus_min) minus_min=minus[i];
    }
    for(i=0;i<5;i++)
    {
        if(minus[i]==minus_min)
        {
            printf("%d",number[i]);
            break;
        }
    }
    return 0;
}
