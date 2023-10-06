#include "Car.h"

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, CAR_CATEGORY carCategory, float carPrice, int carSeatCount, int carFuelCapacity)
: _carChassisNumber(carChassisNumber), _carBrand(carBrand), _carModel(carModel), _carCategory(carCategory), _carPrice(carPrice), _carSeatCount(carSeatCount), _carFuelCapacity(carFuelCapacity)
{
}

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, float carPrice)
: _carChassisNumber(carChassisNumber), _carBrand(carBrand), _carModel(carModel), _carPrice(carPrice)
{
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "carChassisNumber: " << rhs._carChassisNumber
       << " carBrand: " << rhs._carBrand
       << " carModel: " << rhs._carModel
       << " carCategory: " << DisplayEnum(rhs._carCategory)
       << " carPrice: " << rhs._carPrice
       << " carSeatCount: " << rhs._carSeatCount
       << " carFuelCapacity: " << rhs._carFuelCapacity;
    return os;
}

std::string DisplayEnum(const CAR_CATEGORY ctype){
    if(ctype==CAR_CATEGORY::SEDAN){
        return "SEDAN";
    }
    else if(ctype==CAR_CATEGORY::SPORTS_HATCHBACK){
        return "SPORTS_HATCHBACK";
    }
    else{
        return "SUV";
    }
}



int Car::operator+(const Car obj)
{
    return this->carPrice() + obj.carPrice();
}
