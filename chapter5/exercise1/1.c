#include<stdio.h>
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("%d",c);
    return 0;
}
