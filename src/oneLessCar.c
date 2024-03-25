#include "../include/headerA3.h"

void oneLessCar(a3Car **headLL, int whichOne)
{
    int counter = 0;
    a3Car *itr = *headLL;
    a3Car *temp;

    while (itr != NULL)
    {
        counter++;
        if (counter == whichOne - 1)
        {
            temp = itr->nextCar;
            if ((itr->nextCar)->nextCar == NULL)
            {
                free(temp);
            }
            itr->nextCar = (itr->nextCar)->nextCar;
            free(temp);
        }
    }
}