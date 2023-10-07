# define SIZE 5
#include <iostream>
#include "Functionalities.h"



void CreateObjects(Product* arr[SIZE])
{
    arr[0] = new Product{"P101", ProductType::APPLIANCE, 1200.0f, "TATA"};
    arr[1] = new Product{"P102", ProductType::FMCG, 1200.0f, "XYZ"};
    arr[2] = new Product{"P103", ProductType::PERFUME, 400.0f, "FOGG"};
    arr[3] = new Product{"P104", ProductType::FMCG, 800.0f, "ABC"};
    arr[4] = new Product{"P105", ProductType::PERFUME, 600.0f, "ROADSTER"};
}


float AverageProductPrice(Product *arr[SIZE])
{
    float result = 0.0f;
    for(int i=0; i<SIZE; i++){
        result += arr[i]->productPrice();
    }
    return result/SIZE;
}


// Finding Minimum Product Price
float minimumProductPriceTax(Product *arr[SIZE])
{
    float minimum = arr[0]->productPrice();
    for(int i=1; i<SIZE; i++)
    {
        if(minimum > arr[i]->productPrice())
        {
            minimum = arr[i]->productPrice();
        }
    }
    return (0.1f * minimum);
}

// Finding Maximum Product Price
float maximumProductPrice(Product *arr[SIZE])
{
    float maximum = 0.0f;
    for(int i=1;i<SIZE;i++){
        if(maximum < arr[i]->productPrice()){
            maximum = arr[i]->productPrice();
        }
    }
    return maximum;
}


// Deleting all allocation made on heap
void freeMemory(Product *arr[SIZE])
{
    for(int i=0; i < SIZE; i++){
        delete arr[i];
    }
}

 


