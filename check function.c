#include<stdio.h>
int evenodd(int n)
{
    if(n%2==0)
    {
        printf("enter the number is even");

    }
    else if(n%2!=0)
    {
        printf("number is odd");
    }
}
int main()
{
    int n1;
    printf("Input any number : ");
    scanf("%d", &n1);
    evenodd(n1);
}
