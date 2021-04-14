#include<stdio.h>

int main()
{

    char s[10];
    int i;
    int letter=0,blank=0,digit=0,other=0;

    printf("Input 10 characters:");

    for(i=0;i<10;i++)
    {
        scanf("%c",&s[i]);

        if(s[i]>='A' && s[i]<='Z') letter++;
        else if(s[i]>='a' && s[i]<='z') letter++;
        else if(s[i]>='0' && s[i]<='9') digit++;
        else if(s[i]==' ') blank++;
        else other++;
    }

    printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,digit,other);

    return 0;

}

