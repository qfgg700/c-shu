#include <stdio.h>
#include <string.h>

void copy(char str1[],char str2[],int m)
{
    int j=0,i;
    for(i=m-1;i<strlen(str1);i++)
    {
        str2[j++]=str1[i];
    }
}

int main()
{
    char str1[10],str2[10];
    int m;

    printf("Enter a string:");
    gets(str1);
    printf("Enter m:");
    scanf("%d",&m);

    copy(str1,str2,m);
    puts(str2);

    return 0;
}
