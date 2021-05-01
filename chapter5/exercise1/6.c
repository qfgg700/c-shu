#include<stdio.h>

int countdigit(int num,int digit)
{
    int count=0,t;
    while(num)
    {
        t=num%10;
        if(t==digit) count++;
        num/=10;
    }
    return count;
}

int main()
{
    int num,digit;
    printf("Input an integer:");
    scanf("%d",&num);
    if(num<0) num=-num;
    printf("Number of digit 2:%d",countdigit(num,2));
    return 0;
}
