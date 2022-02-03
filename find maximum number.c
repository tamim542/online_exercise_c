#include <stdio.h>
void findmaximumvalue(int  *n1)
{
   long max=0,i;
for(i=0;i<10;i++)
{
     printf(" element  %d\n",*(n1+i));
    if(max<*(n1+i))
    {

        max=*(n1+i);
    }
}
   printf(" \nmaximum value is %d",max);
}
int main()
{
   int  a[10];
   int i;
   printf("enter the value\n");
   for(i=0;i<10;i++)
   {
       scanf("%ld", &a[i]);

   }
 findmaximumvalue(a);

}
