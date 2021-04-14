#include <stdio.h>

int main()
{
    int a[100],i,even=0,odd=0,j;
    int even_all=0,odd_all=0;
    float even_avg,odd_avg;

    for(i=0;;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]==0) break;
        if(a[i]%2==0)
        {
            even++;
            even_all+=a[i];
        }
        else
        {
            odd++;
            odd_all+=a[i];
        }
    }

    even_avg=(float)even_all/(float)even;

    odd_avg=(float)odd_all/(float)odd;

    printf("Number of even:%d;Average of even:%.2f\n",even,even_avg);

    printf("Number of odd:%d;Average of odd:%.2f\n",odd,odd_avg);

    return 0;

}
