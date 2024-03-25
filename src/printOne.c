#include "../include/headerA3.h"

void printOne(struct car *headLL, int whichOne)
{
    int counter = 0;
    a3Car *temp;
    temp = headLL;
    while (temp != NULL)
    {
        counter++;
        temp = temp->nextCar;
        if (counter == whichOne)
        {
            printf("Car # %d:\n", whichOne);
            printf("Car id: %d\n", temp->carId);
            printf("Model: %s\n", temp->model);
            printf("Type: %s\n", temp->type);
            printf("Price: CDN %.2lf\n", temp->price);
            printf("Year of manufacture: %d\n", temp->year);
            break;
        }
    }
}