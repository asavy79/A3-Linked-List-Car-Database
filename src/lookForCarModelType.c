#include "../include/headerA3.h"

int lookForCarModelType(struct car *headLL, char key[100])
{
    int found = 0;
    int count = 0;
    int position;
    a3Car *temp;
    temp = headLL;
    while (temp != NULL)
    {

        count++;
        if (strcmp(key, temp->type) == 0)
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