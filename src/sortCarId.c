#include "../include/headerA3.h"

void sortCarId(struct car **headLL)
{
    int length = 0;
    a3Car *itr;
    a3Car *temp;
    itr = *headLL;
    while (itr != NULL)
    {
        length++;
        itr = itr->nextCar;
    }

    for (int i = 0; i < length - 1; i++)
    {
        itr = *headLL;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if ((itr->nextCar)->carId < (itr->carId))
            {
                temp = itr->carId;
                itr->carId = (itr->nextCar)->carId;
                (itr->nextCar)->carId = temp;
            }
        }
    }
}
