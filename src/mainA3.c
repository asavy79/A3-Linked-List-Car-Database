#include "../include/headerA3.h"

int main()
{
    a3Car *head;
    head = NULL;

    addNewCar(&head);
    addNewCar(&head);

    printAll(head);

    noMoreCars(&head);

    return 0;
}
