#include<stdio.h>
int primenumber(int n)
{
    int i,x;
    for(i=2;i<=n/2;i++)
    {

    if(n%i==0)
    {
        printf("enter the number is not prime");
        break;
    }
    else if(n%i!=0)
    {
       x=1;
    }

}
if(x=1)
    printf("number is prime");
}
int main()
{
    int n1;
    printf("Input any number : ");
    scanf("%d", &n1);
    primenumber(n1);
}

