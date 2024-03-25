#include "../include/headerA3.h"

int countCars(a3Car *headLL)
{
    a3Car *temp;
    temp = headLL;
    int counter = 0;

    while (temp != NULL)
    {
        counter++;
        temp = temp->nextCar;
    }

    return counter;
}