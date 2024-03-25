#include "../include/headerA3.h"

void addNewCar(struct car **headLL)

{

    a3Car *newCar;
    newCar = malloc(sizeof(a3Car));
    newCar->nextCar = NULL;
    int carId = 0;

    printf("Enter the car model: ");
    fgets(newCar->model, 30, stdin);
    newCar->model[strcspn(newCar->model, "\n")] = '\0';

    printf("Enter the car type: ");
    fgets(newCar->type, 30, stdin);
    newCar->type[strcspn(newCar->type, "\n")] = '\0';

    printf("Enter its year of manufacture: ");
    scanf("%d", &(newCar->year));

    printf("Enter its price: CDN $ ");
    scanf("%lf", &(newCar->price));

    getchar();

    for (int i = 0; i < strlen(newCar->model); i++)
    {
        carId += (int)(newCar->model)[i];
    }
    carId += (int)strlen(newCar->type);
    newCar->carId = carId;

    printf("Your computer generated carId is %d\n", carId);

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
