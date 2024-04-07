#include "../include/headerA3.h"
#include <locale.h>

int lookForCarModelType(struct car *headLL, char key[100])
{

    // Initialize variables
    int found = 0;
    int count = 0;
    int position;
    a3Car *temp;
    temp = headLL;
    int index;

    char carModel[50];
    char carType[50];


    char * charPtr = strchr(key, ' ');
    // Check for space in string
    if(charPtr != NULL) {
        index = charPtr - key;
        strncpy(carModel, key, index);
        carModel[index] = '\0';

        strcpy(carType, charPtr + 1);
    }
    else {
        strncpy(carModel, key, sizeof(carModel) - 1);
        carModel[sizeof(carModel)-1] = '\0';
        carType[0] = '\0';
    }



    // Search for car with model and type given
    while (temp != NULL)
    {

        count++;
        if (strcmp(carModel, temp->model) == 0 && strcmp(carType, temp->type) == 0)
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