#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include "Customer.h"
#include <iostream>

void CreateObjects(Customer* arr[SIZE]);

void MatchingType(Customer* arr[SIZE], CustomerType cType, Customer* res[SIZE]);

void CustomerStoreCredits(Customer* arr[SIZE], Customer* res1[SIZE]);

float Average(Customer* arr[SIZE], CustomerType cType);

void freeMemory(Customer* arr[SIZE]);

#endif // FUNCTIONALITIES_H
