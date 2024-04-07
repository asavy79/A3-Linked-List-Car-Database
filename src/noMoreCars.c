#include "../include/headerA3.h"
#include <locale.h>

void noMoreCars(struct car **headLL)
{

    char response[15];

    // Validate response
    do
    {
        printf("Are you sure you want to remove all car data (enter y for yes, n for no): ");
        scanf("%s", response);
    } while (strcmp(response, "y") != 0 && strcmp(response, "n") != 0);


    // Loop through linked list and free each node
    if (strcmp(response, "y") == 0)
    {
        a3Car *temp;
        while (*headLL != NULL)
        {
            temp = *headLL;
            *headLL = (*headLL)->nextCar;
            free(temp);
        }
        printf("All removed. Linked list is now empty.\n");
    }
}
