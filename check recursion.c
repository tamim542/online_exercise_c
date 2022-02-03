#include<stdio.h>
int countdigit(int n)
{

   static int sum=0;
   int reminder;
    if(n!=0)
        {
            reminder =n%10;
sum = sum + reminder;
countdigit(n/10);

        }
         return sum;

}
int main()
{
    int a ;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("%d",countdigit(a));
}
