#include <stdio.h>
#include <math.h>

int main()

{
    int a,b,c;
    float s,square;

    scanf("%d %d %d",&a,&b,&c);

    s=((float)a+(float)b+(float)c)/2;

    square=sqrt(s*(s-(float)a)*(s-(float)b)*(s-(float)c));

    printf("%.3f",square);

    return 0;

}
