#include<stdio.h>
#include<string.h>
//#include<ctype.h>
void convertuppercase(char *capital)
{
    while(*capital!=NULL)
    {
        if(islower(*capital))
        {


 *capital = toupper(*capital);
        }
   capital++;
    }
}
int main()
{
    int i;
   // char array[5000];
    char *string;
    string=malloc(100);
    printf("input some text\n");
    gets(string);

    printf("%s",string);
    convertuppercase(string);
    printf("\n%s",string);


}
