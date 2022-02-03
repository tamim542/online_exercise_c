#include<stdio.h>
int main()
 {
     int i,j,x;
     int a[5][5];
     printf("enter the macthing value\n");
       scanf("%d",&x);
     printf("enter the value\n");
     for(i=0;i<5;i++)
     {
       for(j=0;j<5;j++)
       {
           scanf("%d",&a[i][j]);

       }
       printf("\n");
     }

      for(i=0;i<5;i++)
     {
       for(j=0;j<5;j++)
       {
         if(a[i][j]==x)
         {

             printf("a[%d][%d] = %d\n",i,j,x);
         }
       }
     }
 }
