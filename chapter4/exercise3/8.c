#include <stdio.h>

int main()
{

    int line,row,i,j,num[10][10],sum[10],k=0,temp,du[10][10],digit[10];
    for(i=0;i<10;i++)

        {
            sum[i]=0;
            digit[i]=1;
        }

    scanf("%d%d",&line,&row);

    for(i=0;i<=line-1;i++)
    {
        for(j=0;j<=row-1;j++)
        {
            {
                scanf("%d",&num[i][j]);
            }
        }
    }

    for(i=0;i<=line-1;i+=2)
    {
        for(j=0;j<=row-1;j++)
        {
            sum[k]+=num[i][j];
        }
        k+=1;
    }

    for(i=0;i<=k-1;i++)
    {
        temp=sum[i];
        for(j=0;j<=10;j++)
        {
            du[i][j]=temp%10;
            if(temp/10==0)
                break;
            else
            {
                temp/=10;
                digit[i]++;
            }
        }
    }

    for(i=0;i<=k-1;i++)
    {
        printf("%d:",sum[i]);

        for(j=digit[i]-1;j>=0;j--)
        {

            if(du[i][j]==0)
                printf(" ling");

            else if(du[i][j]==1)
                printf("   yi");

            else if(du[i][j]==2)
                printf("   er");

            else if(du[i][j]==3)
                printf("  san");

            else if(du[i][j]==4)
                printf("   si");

            else if(du[i][j]==5)
                printf("   wu");

            else if(du[i][j]==6)
                printf("  liu");

            else if(du[i][j]==7)
                printf("   qi");

            else if(du[i][j]==8)
                printf("   ba");

            else
                printf("  jiu");

           }
           printf("\n");
       }

}
