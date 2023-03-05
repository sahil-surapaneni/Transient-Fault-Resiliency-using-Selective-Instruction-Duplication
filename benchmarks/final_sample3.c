#include <stdio.h>

// correct answer: 210 -20 (supposedly)
int main()
{
    int sum = 0;
    for (int i = 0; i < 20; i++)
    {
        sum = sum + i;
    }
    printf("%i", sum);
    return sum;
}