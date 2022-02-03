#include<stdio.h>
int perfectnumber(int a,int b)
{
    int i,sum,j,n;
    for(j=a;j<b;j++)
    {
          sum=0;
         printf("enter the value\n");
         scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        {
    printf("perfect number is : %2d",n);
        }
    }
}
int main()
{
    int x,y;
    printf("enter the limit\n");
    scanf("%d%d",&x,&y);
    perfectnumber(x,y);
}

