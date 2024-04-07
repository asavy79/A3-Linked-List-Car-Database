#include "../include/headerA3.h"
#include <locale.h>

int countCars(a3Car *headLL)
{

    a3Car *temp;
    temp = headLL;
    int counter = 0;

    // Loop through linked list
    while (temp != NULL)
    {
        counter++;
        temp = temp->nextCar;
    }

    return counter;
}