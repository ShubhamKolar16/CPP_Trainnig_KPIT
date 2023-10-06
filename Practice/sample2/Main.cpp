#define SIZE 3
#include <iostream>
#include "Car.h"
#include "Functionalities.h"
#include "CAR_CATEGORY.h"


int main(){

    Car* arr[SIZE]={nullptr};

    CreateObjects(arr);

    std::cout << "Average Fuel Capacity is " <<FindAverageFuelCapacity(arr) << "\n";

    std::cout << "Count of Given Brand is " << FindCountOfGivenBrand(arr, CAR_CATEGORY::SEDAN) << "\n";

    Car* c1 = arr[0];
    Car* c2 = arr[1];
    std::cout << "Operator Data: " << *c1 + *c2;
    Car * data=findBestPassengerCar(arr, CAR_CATEGORY::SEDAN);
    std::cout << "Best passenger car of type sedan is: " <<data->carBrand()<< "\n";

}