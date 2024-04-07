#include "../include/headerA3.h"
#include <locale.h>

void printOne(struct car *headLL, int whichOne)
{

    // Initialize variables
    setlocale(LC_NUMERIC, "");
    int counter = 0;
    a3Car *temp;
    temp = headLL;

    // Loop through each node
    while (temp != NULL)
    {
        counter++;
        // Check each node to see if it is a match
        if (counter == whichOne)
        {
            printf("Car #%d:\n", whichOne);
            printf("Car id: %d\n", temp->carId);
            printf("Model: %s\n", temp->model);
            printf("Type: %s\n", temp->type);
            printf("Price: CDN $%'.2lf\n", temp->price);
            printf("Year of manufacture: %d\n", temp->year);
            break;
        }
        temp = temp->nextCar;
    }
}