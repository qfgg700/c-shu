#include <stdio.h>

int main()
{
    int year,sign=-1;

    printf("���������:");
    scanf("%d",&year);

    if((year%400==0)||(year%4==0 && year%100!=0))
        sign=1;
    else
        sign=0;

    if(sign==1) printf("%d��������",year);
    else if(sign==0) printf("%d�겻������",year);
    else printf("error");

    return 0;

}

