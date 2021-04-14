#include<stdio.h>

int main()
{

    int m,n;
    float angel1,angel2,angel;

    scanf("%d:%d",&m,&n);

    if(m>12) m=m-12;

    angel1=(float)n*6;
    angel2=(float)m*30+0.5*(float)n;
    angel=angel1-angel2;

    if(angel<0) angel=-angel;
    if(angel>180) angel=360-angel;

    printf("%.3f",angel);

    return 0;

}
