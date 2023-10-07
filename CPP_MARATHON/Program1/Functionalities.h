
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 5
#include "Product.h"

// A Function to create 5 instances of Product in the heap.
void CreateObjects(Product* arr[SIZE]);

// A function to find and return average of productPrice.
float AverageProductPrice(Product *arr[SIZE]);

// A function to return the Product Tax Amount with minimum product Price.
float minimumProductPriceTax(Product *arr[SIZE]);

// A function to return the Product Tax Amount with maximum product Price.
float maximumProductPrice(Product *arr[SIZE]);

// A function to delete all allocation made on heap
void freeMemory(Product* arr[SIZE]);

#endif // FUNCTIONALITIES_H
