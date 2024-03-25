#include "../include/headerA3.h"

void printAll(struct car *headLL)
{
    a3Car *temp;
    temp = headLL;
    int carCount = 0;
    while (temp != NULL)
    {
        carCount++;
        printf("Car # %d:\n", carCount);
        printf("Car id: %d\n", temp->carId);
        printf("Model: %s\n", temp->model);
        printf("Type: %s\n", temp->type);
        printf("Price: CDN %.2lf\n", temp->price);
        printf("Year of manufacture: %d\n", temp->year);
        temp = temp->nextCar;
    }
}