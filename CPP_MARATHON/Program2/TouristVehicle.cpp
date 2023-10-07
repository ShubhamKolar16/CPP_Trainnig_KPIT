#include "TouristVehicle.h"
// #include "CategoryPermit.h"


TouristVehicle::TouristVehicle(std::string number, VehicleType type, int seat_count, float per_hour_booking_charge)
: _number(number), _type(type), _seat_count(seat_count), _per_hour_booking_charge(per_hour_booking_charge)
{
}

std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << DisplayEnum(rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge;
    return os;
}





// std::string DisplayEnumPermit(const CategoryPermit cPermit)
// {
//     if(cPermit == CategoryPermit::LEASE){
//         return "LEASE";
//     } 
//     else
//     {
//         return "OWNER";
//     }
// }

std::string DisplayEnum(const VehicleType cVehicle)
{
    if(cVehicle == VehicleType::BIKE){
        return "BIKE";
    }
    else if(cVehicle == VehicleType::BUS){
        return "BUS";
    }
    else{
        return "CAB";
    }
    
}