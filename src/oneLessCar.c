#include "../include/headerA3.h"
#include <locale.h>

void oneLessCar(a3Car **headLL, int whichOne)
{

    // Initialize variables
    int counter = 0;
    a3Car *itr = *headLL;
    a3Car *temp;
    int carId;

    // Handle case where list is only one long
    if(countCars(*headLL) == 1) {
        carId = (*headLL)->carId;
        free(*headLL);
        *headLL = NULL;
    }
    // Handle case where first node is removed
    else if(whichOne == 1) {
        temp = *headLL;
        carId = temp->carId;
        *headLL = (*headLL)->nextCar;
        free(temp);
    }
    // Loop through linked list and check to see if each node is a match
    else {
        while (itr != NULL)
        {
            counter++;
            if (counter == whichOne - 1)
            {
                temp = itr->nextCar;
                if ((temp)->nextCar == NULL)
                {
                    itr->nextCar = NULL;
                    carId = temp->carId;
                    free(temp);
                    break;
                }
                else
                {
                    itr->nextCar = temp->nextCar;
                    carId = temp->carId;
                    free(temp);
                    break;
                }
            }
            itr = itr->nextCar;
        }

    }
    printf("Car [Id: %d] removed\n", carId);
    printf("There are now %d cars remaining.\n", countCars(*headLL));
}