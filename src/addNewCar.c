#include "../include/headerA3.h"
#include <locale.h>

void addNewCar(struct car **headLL)

{


    // Initialize car
    a3Car *newCar;
    newCar = malloc(sizeof(a3Car));
    newCar->nextCar = NULL;
    int carId = 0;


    // Scan user input
    printf("Enter the car model: ");
    fgets(newCar->model, MAX_LENGTH, stdin);
    newCar->model[strcspn(newCar->model, "\n")] = '\0';

    printf("Enter the car type: ");
    fgets(newCar->type, MAX_LENGTH, stdin);
    newCar->type[strcspn(newCar->type, "\n")] = '\0';

    printf("Enter its year of manufacture: ");
    scanf("%d", &(newCar->year));

    getchar();

    printf("Enter its price: CDN $ ");
    scanf("%lf", &(newCar->price));

    getchar();


    // Generate car Id
    for (int i = 0; i < strlen(newCar->model); i++)
    {
        carId += (int)(newCar->model)[i];
    }
    carId += (int)strlen(newCar->type);



    // Check for car Id already in use
    while(lookForCarId(*headLL, carId) != -1) {
        carId = rand() % 1000;
    }
 

    newCar->carId = carId;

    printf("Your computer generated carId is %d\n", carId);


    // Place new node in the linked list
    if (*headLL == NULL)
    {
        *headLL = newCar;
    }

    else
    {
        a3Car *temp;
        temp = *headLL;
        while (temp->nextCar != NULL)
        {
            temp = temp->nextCar;
        }
        temp->nextCar = newCar;
    }
}
