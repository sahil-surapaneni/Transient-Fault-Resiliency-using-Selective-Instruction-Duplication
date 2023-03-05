#include <stdio.h>

int main()
{
    int x = 10;
    int y = x + 5;

    int z = 15;
    if (y == z)
    {
        int l = z + x;
        return l;
    }
    else
    {
        int l = z + y;
        return l;
    }
}