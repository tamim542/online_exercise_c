#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n;
 char *small;
 small=(char*)malloc(100*sizeof(char));
 printf("input any text\n");
 gets(small);
 n=strlen(small);
 printf("%d",n);
 //char *capital = small;
 //gets(small);
for(i=0;i<=n;i++)
    {
        printf("input any text\n");
     if(*(small+i) >= 97 && *(small+i)<= 122)
     {
         printf("s");
         *(small+i)=((*small+i)-32);
     }

}
  printf("%s",*small);
}

