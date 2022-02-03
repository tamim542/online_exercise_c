#include<stdio.h>
int main()
{
    int student[5][3],i,j,s,t,max;
    float average,sum=0;
    printf("enter the marks\n");

    for(i=0;i<5;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&student[i][j]);


        }
    }

    printf("      %13s  %13s  %13s  %13s\n","exam1","exam2","exam3","average");
     max=student[0][0];
   for(s=0;s<5;s++)
    {
        sum=0;
 printf("student: %d ",s);
        for(t=0;t<3;t++)
        {
            printf("%10d",student[s][t]);
                if(student[s][t]>max)
                {
                    max=student[s][t];
                }
             sum=student[s][t] + sum;


        }
       average = sum / 3;
        printf("          %f",average);
        printf("\n");
    }

    printf("\n max is %d",max);

}
