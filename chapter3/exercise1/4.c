#include <stdio.h>

int main()
{
    int i;

    printf("Enter a number:");
    scanf("%d",&i);

    switch(i)
    {
        case 1:
            printf("111");
            break;

        case 2:
            printf("222");
            break;

        case 3:
            printf("333");
            break;

        case 4:
            printf("444");
            break;

        default:
            printf("error");

    }

    return 0;

}
