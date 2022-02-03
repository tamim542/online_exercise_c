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

      for(i=0;i<25;i++)
     {
       for(j=0;j<25;j++)
       {
               if(a[j]>a[j+1])
         {
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
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



