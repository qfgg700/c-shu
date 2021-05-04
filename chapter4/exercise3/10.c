#include<stdio.h>
#include<string.h>

int main()
{
    int j,q,c=0;
    char a[20];
    gets(a);

    for(j=0;j<strlen(a);j++)
   {
     if((a[j]<='Z'&&a[j]>='D')||(a[j]<='z'&&a[j]>='d'))
        a[j]=a[j]-3;
    else if ((a[j]<='C'&&a[j]>='A')||(a[j]<='c'&&a[j]>='a'))
        a[j]=a[j]+23;
    }

    for(q=strlen(a)-1;q>=0;q--)
        printf("%c",a[q]);

    printf("\n");

    return 0;

}
