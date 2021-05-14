#include<stdio.h>

void function(int a[],int b[],int n,int m)
{
    int i=0,j=0,k=0,z;
    int c[100];

    while(i!=n+1 && j!=m+1)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }

    }

    for(z=0;z<n+m;z++)
    {
        printf("%4d",c[z]);
    }
}
int main()
{
    int n,m,i;
    int a[100],b[100];

    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter %d integers:",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    function(a,b,n,m);
    return 0;
}
