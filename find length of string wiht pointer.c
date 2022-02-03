#include<stdio.h>
#include<stdio.h>
int main()
{
int i,count=0;
 char *small;
 small=malloc(100);
 printf("input any text\n");
 gets(small);
 for(;*small!=NULL;*small++)
 {


         count++;




 }
 printf("%5d",count);

}
