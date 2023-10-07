#define SIZE 3
#include<iostream>
#include "Functionalities.h"
#include "VehicleType.h"
#include "TouristVehicle.h"


void CreateObjects(TouristVehicle *arr[SIZE])
{
    arr[0] = new TouristVehicle{"101", VehicleType::BUS, 8, 500.0f};
    arr[1] = new TouristVehicle{"101", VehicleType::CAB, 4, 200.0f};
    arr[2] = new TouristVehicle{"101", VehicleType::BIKE, 2, 50.0f};
}


void returnAllInstanceWithCondition(TouristVehicle *arr[SIZE],TouristVehicle* res[SIZE])
{
    int k=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->seatCount()>=4){
            res[k++]=arr[i];
        }
    }
}

float AverageBookChargePerHour(TouristVehicle *arr[SIZE],VehicleType type)
{
    float avg=0.0f;
    int count=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->type()==type){
            avg +=arr[i]->perHourBookingCharge();
            count=count+1;
        }
    }
    return avg/count;
}

TouristVehicle *MaximumPerhourBooking(TouristVehicle *arr[SIZE])
{
    float max=arr[0]->perHourBookingCharge();
    TouristVehicle* data={nullptr};
    for(int i=1;i<SIZE;i++){
        if(max<arr[i]->perHourBookingCharge()){
            max=arr[i]->perHourBookingCharge();
            data=arr[i];
        }
    }
    return data;
}

void destroyAllInstance(TouristVehicle *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        arr[i]=nullptr;
    }   
}

void freeMemory(TouristVehicle *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}
