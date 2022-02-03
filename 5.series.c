#include <stdio.h>
int series(int x)
{
 int i,j,n,sum=0,fact;
 //printf("enter the number\n");
 //scanf("%d",&x);
 for(i=1;i<=x;i++)
 {
     fact=1;
     //printf("enter the size\n");
    // scanf("%d",&n);
     for(j=1;j<=i;j++)
     {
         fact=fact*j;
     }
     sum= sum + fact/i;
 }
 return sum;
}

int main()
{
    int y;
    printf("enter the number\n");
 scanf("%d",&y);
   printf("sum = %d", series(y));
}

