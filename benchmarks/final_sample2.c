#include <stdio.h>

// correct answer: 140
int main()
{
    int x = 5;
    int y = 10;
    int z = 15;

    int t = x + y;
    int a = y * z;

    int b = a - t;
    int c = b + x;

    return c;
}