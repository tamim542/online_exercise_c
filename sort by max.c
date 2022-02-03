#include<stdio.h>
int main()
 {
     int i,j,x,temp;
     int a[25];
     printf("enter the value\n");
     for(i=0;i<25;i++)
     {

           scanf("%d",&a[i]);



     }
  int max = a[0];
      for(i=0;i<25;i++)
     {
       for(j=0;j<25;j++)
       {
               if(a[j]>max)
         {
           max = a[j];
            a[j]= temp;
         }

         }

     }
     for(i=0;i<25;i++)
     {
          printf(" %d",a[i]);
          if(i%5==0)
            printf("\n");
     }


     }



