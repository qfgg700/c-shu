#include <stdio.h>
#include <string.h>

int main()
{
   char a[6][7];
   int b[6]={0,0,0,0,0,0},i,j,k=0;

   for(i=0;i<6;i++)
   {
       scanf("%s",a[i]);
   }

   for(i=0;i<6;i++)
   {
        for(j=0;j<6;j++)
        {
             if(a[i][j]=='A') b[i]=j+1;
        }
   }

    for(i=0;i<6;i++)
   {
       printf("%d",b[i]);
   }

   return 0;
}
