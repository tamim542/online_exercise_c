#include <stdio.h>

int swap(int x, int y)
{
int c;
    c = x;
    x = y;
    y = c;
    return x, y;
}

int main()
{
int a = 5, b = 7;

    printf("a=%d b=%d\n", a, b);
    swap(a, b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
