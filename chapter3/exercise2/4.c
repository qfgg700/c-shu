#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i,j;

    for(i=0;;i++)
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n') break;
    }

    for(j=0;j<i;j++)
    {
        if(s[j]==' ' || (s[j]>='1' && s[j]<='9')) continue;
        else printf("%c",s[j]);
    }

    return 0;

}
