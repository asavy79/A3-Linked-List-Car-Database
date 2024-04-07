#include "../include/headerA3.h"
#include <locale.h>

void loadCarData(struct car **headLL, char fileName[MAX_LENGTH])
{

    // Open file
    FILE *fptr = fopen(fileName, "r");
    int carId;
    int character;


    // Check that file exists
    if (fptr == NULL)
    {
        printf("File not found\n");
        return;
    }

    character = fgetc(fptr);


    // Check first character
    if(character == EOF) {
        printf("Text file is empty\n");
        return;
    }

    fseek(fptr, 0, SEEK_SET);
    
    a3Car *temp;

    int empty = 0;


    if(*headLL == NULL) {
        empty = 1;
    }


    // Set up a temp
    temp = *headLL;
    if(!empty)
    {
        while (temp->nextCar != NULL)
        {
            temp = temp->nextCar;
        }
    }

    char line[100];

    char *token;


    // Scan file data with token
    while (fgets(line, 100, fptr))
    {

        a3Car *newCar = calloc(1, sizeof(a3Car));
        line[strcspn(line, "\n")] = '\0';

        token = strtok(line, ",");
        if(token != NULL) {
            carId = atoi(token);

            while(lookForCarId(*headLL, carId) != -1) {
                carId = rand() % 1000;
            }
            newCar->carId = carId;
        }
        

        token = strtok(NULL, ",");
        if(token != NULL) {
            strcpy(newCar->model, token);
        }
        

        token = strtok(NULL, ",");
        if(token != NULL) {
            strcpy(newCar->type, token);
        }
        

        token = strtok(NULL, ",");
        if(token != NULL) {
            newCar->year = atoi(token);
        }

        token = strtok(NULL, ",");
        if(token != NULL) {
            newCar->price = atof(token);
        }

        if(empty) {
            *headLL = newCar;
            temp = *headLL;
            empty = 0;
            
        }
        else {
            temp->nextCar = newCar;
            temp = newCar;
        }

    }

    // Set the next for the last car to null
    temp->nextCar = NULL;
    fclose(fptr);
}