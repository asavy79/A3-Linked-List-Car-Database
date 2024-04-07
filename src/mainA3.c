#include "../include/headerA3.h"
#include <locale.h>

int main()
{
    // Initialize variables
    a3Car *head;
    head = NULL;

    int response;
    int position;
    int carId;

    char modelType[100];

    char fileName[MAX_LENGTH];


   
    // Loop through functions
    do {
        printf("\n");
        printf("1. Add data on a new car\n");
        printf("2. Load data on cars from a given text file\n");
        printf("3. Print data of all cars\n");
        printf("4. Print data of the nth car\n");
        printf("5. Search car data based on carId\n");
        printf("6. Search car data based on model and type\n");
        printf("7. Count the total number of cars in the list\n");
        printf("8. Sort the cars in the list based on carId\n");
        printf("9. Remove data of the nth car\n");
        printf("10. Remove all car data\n");
        printf("11. Exit\n\n");


        printf("Choose a menu option: ");
        scanf("%d", &response);

        getchar();

        printf("\n");

        // Handle different cases
        switch(response) {
            case 1: 
                addNewCar(&head);
                break;
            case 2:
                printf("Enter file name: ");
                scanf("%s", fileName);
                getchar();
                loadCarData(&head, fileName);
                break;
            case 3:
                printAll(head);
                break;
            case 4:
                
                do {
                    printf("Enter a position: ");
                    scanf("%d", &position);
                    getchar();
                    // Validate position
                    if(position < 1 || position > countCars(head)) {
                        printf("Invalid position. There are %d cars.\n", countCars(head));
                    }
                } while(position < 1 || position > countCars(head));
                
                printOne(head, position);
                break;
            case 5:
                printf("Enter a car ID: ");
                scanf("%d", &carId);
                getchar();
                position = lookForCarId(head, carId);
                // Validate position
                if(position != -1) {
                    printOne(head, position);
                }
                else {
                    printf("Car not found.\n");
                }
                break;
            case 6:
                printf("Enter the model and type (separated by a space): ");
                fgets(modelType, 100, stdin);
                modelType[strcspn(modelType, "\n")] = '\0';
                position = lookForCarModelType(head, modelType);
                // Validate position
                if(position != -1) {
                    printOne(head, lookForCarModelType(head, modelType));
                }
                else {
                    printf("Car not found.\n");
                }
                
                break;
            case 7:
                printf("Total number of cars = %d\n", countCars(head));
                break;
            case 8:
                sortCarId(&head);
                break;
            case 9:
                printf("Currently there are %d cars.\n", countCars(head));
                if(countCars(head) == 0) {
                    break;
                }
                 do {
                    printf("Which car do you wish to remove? Enter a value between 1 and %d: ", countCars(head));
                    scanf("%d", &position);
                    getchar();
                    // Check for valid car position
                    if(position < 1 || position > countCars(head)) {
                        printf("Invalid position. There are %d cars.\n", countCars(head));
                    }
                    } while(position < 1 || position > countCars(head));

                oneLessCar(&head, position);
                break;
            case 10:
                noMoreCars(&head);
                break;
            case 11:
                break;
                break;

        }
    } while(response != 11);

    return 0;
}
