#include <stdio.h>
int main()
{
  int count1=0;
  int count2=0;
  int count3=0;
    char *pt;
    pt=malloc(50);
    printf(" Input a string: ");
   gets(pt);

    while(*pt!='\0')
    {
        if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
            count1++;
      if(*pt==' ')
      {
          count2++;
      }
      else if(*pt!=' '&& *pt!='A' &&*pt!='E' && *pt!='I' && *pt!='O' && *pt!='U' && *pt!='a' && *pt!='e' && *pt!='i' && *pt!='o' && *pt!='u')
      {
        count3++;
      }
         *pt++;

    }
     printf(" Number of vowels : %d\n Number of space : %d\n Number of consonant : %d\n ",count1,count2,count3);
     printf("Number of word :%d\n",count2+1);
    return 0;
}
