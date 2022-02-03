#include<stdio.h>
int main()
{
    int num,i,a=1;

    int *fact;
    *fact=1;
    printf("enter the value:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        *fact = *fact *i;
    }
    printf("%d",*fact);
}
