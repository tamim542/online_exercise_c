#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  int i,n;
    char capital[1000],cap[100];
    gets(capital);
    n=strlen(capital);
     printf("%d\n",n);

for(i=0;i<n;i++)
    {

        if((capital[i]>=97) && (capital[i]<=122))
        {

           capital[i]=(capital[i]-32);
        }


    }
    printf("%s",capital);
}
