#define SIZE 3
#include<iostream>
#include "Functionalities.h"
#include "TouristVehicle.h"
#include "VehicleType.h"

int main()
{
    //Creating Empty Container
    TouristVehicle* arr[SIZE]={nullptr};

    TouristVehicle* res[SIZE]={nullptr};

    //Calling  CreateObjects function.
    CraeteObjects(arr);
    std::cout<<"Object is Created\n";
    
    //calling function to returnAllInstance With some Condition.    
    returnAllInstanceWithCondition(arr,res);
    std::cout<<"\n***********returnAllInstance is :*************\n";
    for(int i=0;i<SIZE;i++){
        if(res[i]==nullptr){
            break;
        }
        else{
            std::cout<<*res[i]<<"\n";
        }
    }

    //calling function to find AverageBookChargePerHour.    
    std::cout<<"AverageBookChargePerHour is :"<<AverageBookChargePerHour(arr,VehicleType::CAB)<<"\n";

    //calling function to find Maximum Per Hour Booking.    
    std::cout<<"Maximum Per Hour instance Detail is :"<<*MaximumPerhourBooking(arr)<<"\n";

    //calling function to destroy all instance 
    destroyAllInstance(arr);
    std::cout<<"All instance is destroyed :\n";
    
    // Memory cleanup
    freeMemory(arr);
}