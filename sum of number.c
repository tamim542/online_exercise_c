#include<stdio.h>
int sumdigit(int n)
{

   static int sum=0;
   int reminder;
    if(n!=0)
        {
            reminder =n%10;
sum = sum + reminder;
sumdigit(n/10);

        }
         return sum;

}
int main()
{
    int a ;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("%d",sumdigit(a));
}
