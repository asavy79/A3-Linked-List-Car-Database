#include "../include/headerA3.h"

int lookForCarId(struct car *headLL, int key)
{
    int found = 0;
    int count = 0;
    int position;
    a3Car *temp;
    temp = headLL;
    while (temp != NULL)
    {

        count++;
        if (temp->carId == key)
        {
            found = 1;
            position = count;
        }
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