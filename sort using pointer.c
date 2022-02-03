#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,ab[10];
    int i,j,temp;
    a=(int*)malloc(10*sizeof(int));
   // a=malloc(10);
    printf("enter the element\n");
    for(i=0;i<10;i++)
    {
      scanf("%d",a+i);



    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("acending sort : %d\n",*(a+i));
    }
}


