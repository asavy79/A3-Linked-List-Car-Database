#include "../include/headerA3.h"
#include <locale.h>

void sortCarId(struct car **headLL)
{

    // Initialize variables
    int length = countCars(*headLL);

    a3Car * current;
    current = *headLL;
    a3Car * itr;
    a3Car * minNode;
    int minimum;
    int swapped;

    a3Car temp;


    // Run selection sort
    for(int i = 0; i < length; i++) {
        swapped = 0;
        itr = current;
        minimum = current->carId;
        minNode = current;
        while(itr) {
            // Check for unsorted Ids
            if(itr->carId < minimum) {
                swapped = 1;
                minNode = itr;
                minimum = itr->carId;
            }
            itr = itr->nextCar;
        }
        if(swapped) {

            // Swap dereferenced data
            a3Car *tempNext = current->nextCar;
            a3Car *minNext = minNode->nextCar;

            temp = *current;
            *current = *minNode;
            *minNode = temp;

            current->nextCar = tempNext;
            minNode->nextCar = minNext;
        }
        current = current->nextCar;
    }

  
}
