#include <stdio.h>
#include <string.h>

int main()
{
    char a[30],b[10],d[10];
    int i,j,k=0,t,x=1,c[10];
    gets(a);

    for(i=0;i<strlen(a);i++)
        if(a[i]>='a'&&a[i]<='z')
        {
            b[k]=a[i];
            k++;
        }

        if(k==0)
            printf("None\n");

    for(i=1;i<k;i++)
        for(j=0;j<k-1;j++)
            if(b[j]>b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }

            j=0;

            for(i=0;i<k-1;i++)
            {
                if(b[i]==b[i+1])
                    x++;
                else
                {
                    c[j]=x;
                    d[j]=b[i];
                    x=1;
                    j++;
                }
            }

            t=0;

            for(i=0;i<j;i++)
                t+=c[i];

            if(t!=k)
            {
                c[j]=k-t;
                d[j]=b[k-1];
                j++;
            }

    for(i=0;i<j;i++)
        printf("%c:%d\n",d[i],c[i]);

     return 0;

}
