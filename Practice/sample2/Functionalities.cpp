#include "Functionalities.h"

void CreateObjects(Car* arr[SIZE]){
    arr[0] = new Car{"123", "TATA", "HARRIER", CAR_CATEGORY::SUV, 240000.0f, 5, 45};
    arr[1] = new Car{"132", "TATA", "SAFARI", CAR_CATEGORY::SEDAN,  300000.0f, 5, 35};
    arr[2] = new Car{"222", "BMW", "M3", CAR_CATEGORY::SEDAN, 940000.0f, 2, 65};
}

float FindAverageFuelCapacity(Car* arr[SIZE]){
    float total = 0;
    for(int i=0; i<SIZE; i++){
       total += arr[i]->getCarFuelCapacity();
    }
    return total/SIZE;
}



float FindCountOfGivenBrand(Car* arr[SIZE], CAR_CATEGORY carCategory){
    int count = 0;
    for(int i=0; i<SIZE; i++){
        if(carCategory==arr[i]->carCategory()){
            count++;
        }
    }
    return count;
}

Car* findBestPassengerCar(Car* arr[SIZE], CAR_CATEGORY cCategory){
    Car* arr1[SIZE] = {nullptr};
    int seatCapacity=0;
    Car *bestCar;
    for(int i=1;i<5;i++){
        if(arr[i]->getCarSeatCount()>=seatCapacity && ( arr[i]->carCategory() == cCategory))
        {
            seatCapacity=arr[i]->getCarSeatCount();
            bestCar=arr[i];
        }
    }
    return bestCar;
}
