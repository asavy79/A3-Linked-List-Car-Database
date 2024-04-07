#include "../include/headerA3.h"
#include <locale.h>

int lookForCarId(struct car *headLL, int key)
{

    // Initialize variables
    int found = 0;
    int count = 0;
    int position;
    a3Car *temp;
    temp = headLL;

    // Loop through linked list
    while (temp != NULL)
    {

        count++;
        if (temp->carId == key)
        {
            found = 1;
            position = count;
        }
        temp = temp->nextCar;
    }
    if (found)
    {
        return position;
    }
    else
    {
        return -1;
    }
}