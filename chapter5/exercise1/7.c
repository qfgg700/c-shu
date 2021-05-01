#include<stdio.h>

void szt(int n)
{
    int i,j=1,k;
    k=n;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2d",j);
        }
        for(j=i-1;j>0;j--)
        {
            printf("%2d",j);
        }
        printf("\n");
        k--;
    }
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    szt(n);
    return 0;
}
