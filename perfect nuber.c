#include<stdio.h>
int perfectnumber(int a1,int a2)
{
    int i,sum=0,j;
    for(j=a1;j<=a2;j++)
    {
   sum=0;
    for(i=1;i<j;i++)
    {
        if(j%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==j)

    printf(" %d ",sum);

    }
}
int main()
{
    int n1,n2;
    printf("enter the limit\n");
    scanf("%d%d",&n1,&n2);
    perfectnumber(n1,n2);
}
