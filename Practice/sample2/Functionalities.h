#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include "Car.h"


void CreateObjects(Car* arr[SIZE]);


float FindAverageFuelCapacity(Car* arr[SIZE]);

float FindCountOfGivenBrand(Car* arr[SIZE], CAR_CATEGORY carCategory);

Car* findBestPassengerCar(Car* arr[SIZE], CAR_CATEGORY cCategory);

#endif // FUNCTIONALITIES_H
