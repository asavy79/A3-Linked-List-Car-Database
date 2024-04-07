#include "../include/headerA3.h"
#include <locale.h>

void printAll(struct car *headLL)
{
    // Initialize variables
    setlocale(LC_NUMERIC, "");
    a3Car *temp;
    temp = headLL;
    int carCount = 0;


    // Loop through each node in linked list
    while (temp != NULL)
    {
        // Print car data
        carCount++;
        printf("Car #%d:\n", carCount);
        printf("Car id: %d\n", temp->carId);
        printf("Model: %s\n", temp->model);
        printf("Type: %s\n", temp->type);
        printf("Price: CDN $%'.2lf\n", temp->price);
        printf("Year of manufacture: %d\n", temp->year);
        temp = temp->nextCar;

        printf("\n");
    }

    // Print car count
    if(carCount == 0) {
        printf("No cars found\n");
    }
    else {
        printf("Currently, there are %d cars.\n", carCount);
    }
}