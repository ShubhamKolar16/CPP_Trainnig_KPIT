#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include "VehicleType.h"
#include "TouristVehicle.h"

// A Function to Create 3 Objects 
void CraeteObjects(TouristVehicle* arr[SIZE]);

// A Function to Destroy the instances
void destroyAllInstance(TouristVehicle* arr[SIZE]);

// A Function to return instances of Tourish Vehicle
void  returnAllInstanceWithCondition(TouristVehicle* arr[SIZE],TouristVehicle* res[SIZE]);

/*
     A Function to find the average for per hour booking
     charge that are of type "CAB"
*/
float AverageBookChargePerHour(TouristVehicle* arr[SIZE],VehicleType type);

/* A Function to find the Tourist Vehicle which
   has "MAXIMUM" per_hour_booking_charge
*/
TouristVehicle* MaximumPerhourBooking(TouristVehicle* arr[SIZE]);

// A Function to delete the allocation made on Heap
void freeMemory(TouristVehicle* arr[SIZE]);

#endif // FUNCTIONALITIES_H