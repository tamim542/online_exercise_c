#include <stdio.h>
#include <string.h>

int main()
{
  	char Str[100], RevStr[100];
  	int i, j, len;

  	printf("\n  enter any String :  ");
  	gets(Str);

  	j = 0;
  	len = strlen(Str);

  	for (i = len -1; i >= 0; i--)
  	{
  		RevStr[j++] = Str[i];
  	}



  	printf("\nReverse = %s", RevStr);


}
