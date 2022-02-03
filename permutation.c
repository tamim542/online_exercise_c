#include<stdio.h>
#include <string.h>


void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void permute(char *a, int i, int n)
{
   int j;
   if (i== n)
     printf("%s\n", a);
   else
   {
       for (j = i;  j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j));
       }
   }
}

int main()
{
    char str[600] ;
    printf("any string\n");
    gets(str);
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}

