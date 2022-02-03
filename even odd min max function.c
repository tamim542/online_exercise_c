#include<stdio.h>
int max()
{
    int y;
    int max = 0;
    int n,i;
    printf("enter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value\n");
        scanf("%d",&y);
    if(y>max)
    {
        max=y;
    }
    }
    printf("Max is = %d",max);
}
int min()
{
    int y;
    int min = 100;
    int n,i;
    printf("\nenter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value\n");
        scanf("%d",&y);
    if(y<min)
    {
        min=y;
    }
    }
    printf("Min is = %d",min);
}
int even()
{
     int y;
    int max = 0;
    int n,i;
    printf("\nenter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the value\n");
        scanf("%d",&y);
    if(y%2==0)
    {
         printf("value is even = %d",y);
    }
    else
        printf("number is not even %d",y);
    }
}
int odd()
{
    int y;
    int n,i;
    printf("\nenter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the value\n");
        scanf("%d",&y);
    if(y%2!=0)
    {
         printf("value is odd = %d",y);
    }
    else
        printf("\nnumber is not odd %d",y);
    }
}
int main()
{
    int y;
    int n,i;

    max();
    min();
    even();
    odd();
}
