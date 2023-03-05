#include <stdio.h>

// correct answer: 210 -20 (supposedly)
int main()
{
    int sum = 0;
    int y = 7;
    int x = 5;
    int z = 15;

    int t = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < 20; i++)
    {
        if (i < y)
        {
            t = x + y;
            a = y * z;
            b = a - t;
            c = b + x;
        }
        else
        {
            t = x - y;
            a = y + z;
            b = a + t;
            c = b + x;
        }

        sum += c;
    }
    return sum;
}