#define SIZE 5
#include<iostream>
#include "Product.h"
#include "Functionalities.h"


int main(){

    //Creating Empty Container
    Product* arr[SIZE]={nullptr};

    //A  Function to CreateObjectsin heap
    CreateObjects(arr);

    //A Function to find the averagePrice.
    std::cout<<"Average Product Price is :"<<AverageProductPrice(arr)<<"\n";

    // Function to find the productTaxAmount.
    std::cout<<"Minimum productPrice Tax is: "<<minimumProductPriceTax(arr)<<"\n";

    //A Function to find the Maximum productPrice
    std::cout<<"Maximum productPrice is: "<<maximumProductPrice(arr)<<"\n";

    // A Function to Deleting the memory on heap
    freeMemory(arr);
};