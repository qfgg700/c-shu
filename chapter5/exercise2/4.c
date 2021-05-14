#include<stdio.h>
#include<string.h>

void delchar(char s[],char c)
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
        {
            continue;
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}

int main()
{
    char s[100],c;

    printf("Enter a string:");
    gets(s);
    printf("Enter a char:");
    scanf("%c",&c);

    printf("After deleted,the string is:");
    delchar(s,c);

    return 0;
}
