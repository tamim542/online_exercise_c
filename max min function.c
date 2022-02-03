
#include<stdio.h>
//int max(int x ,int y , int z );
//int min(int , int , int);
int max(int x, int y, int z)
{

int max;
    if(x>y && x>z)
    {
        max=x;
        return x;

    }
    if(y>x && y>z)
    {
        max=y;
        return y;

    }
    if(z>x && z>y)
    {
        max=z;
        return z;

    }
}
int min(int a, int b, int c)
{
 int min;

    if(a<b && a<c)
    {
        min=a;
        return a;

    }
    if(b<a && b<c)
    {
        min=b;
        return b;

    }
    if(c<a && c<b)
    {
        min=c;
        return c;
    }
}

int main()
{
    int value1,value2,value3;


         printf("enter the value\n");
         scanf("%d%d%d",&value1,&value2,&value3);
      printf("max is %d",max(value1,value2,value3));

      printf("\nmin is %d",min(value1,value2,value3));
}
/*int max(int x, int y, int z)
{

int max;
    if(x>y && x>z)
    {
        max=x;
        return x;

    }
    if(y>x && y>z)
    {
        max=y;
        return y;

    }
    if(z>x && z>y)
    {
        max=z;
        return z;

    }
}
int min(int a, int b, int c)
{
 int min;

    if(a<b && a<c)
    {
        min=a;
        return a;

    }
    if(b<a && b<c)
    {
        min=b;
        return b;

    }
    if(c<a && c<b)
    {
        min=c;
        return c;
    }
}*/
