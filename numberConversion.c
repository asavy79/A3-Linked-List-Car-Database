#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printNumber(double n);

int main()
{

    printNumber(1303200.67);

    return 0;
}

void printNumber(double n)
{

    double remainder = round(100 * (n - (int)n));
    int remainderIntegers = (int)remainder;
    int temp = n;
    int length = 0;
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }

    char *characterList = malloc(sizeof(char) * length);
    temp = n;
    for (int i = 0; i < length; i++)
    {
        characterList[i] = (char)((temp % 10) + '0');
        temp /= 10;
    }

    printf("$");

    for (int i = length - 1; i > -1; i--)
    {
        if (i % 3 == 0 && i != 0)
        {
            printf("%c", characterList[i]);
            printf(",");
        }
        else
        {
            printf("%c", characterList[i]);
        }
    }
    printf(".");
    if (remainderIntegers / 10 == 0)
    {
        printf("0");
    }
    printf("%d", remainderIntegers);
    printf("\n");

    free(characterList);
}
