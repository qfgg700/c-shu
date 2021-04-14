#include <stdio.h>

int main()
{
    char s,f;

    printf("Enter a character:");
    scanf("%c",&s);

    if(s>='a' && s<='z')
    {
        f=s-'a'+'A';
    }
    else if(s>='A' && s<='Z')
    {
        f=s-'A'+'a';
    }
    else
        f=s;

    printf("%c",f);

    return 0;

}
