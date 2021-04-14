#include <stdio.h>

int main()
{
    int year,sign=-1;

    printf("请输入年份:");
    scanf("%d",&year);

    if((year%400==0)||(year%4==0 && year%100!=0))
        sign=1;
    else
        sign=0;

    if(sign==1) printf("%d年是闰年",year);
    else if(sign==0) printf("%d年不是闰年",year);
    else printf("error");

    return 0;

}

