#include <stdio.h>

int square(int x)
{
    return x * x;
}

int main()
{
    int (*p)(int) = square;

    printf("%d", p(6));

    return 0;
}