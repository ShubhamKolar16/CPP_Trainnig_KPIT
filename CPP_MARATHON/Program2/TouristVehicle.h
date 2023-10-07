#ifndef TOURISHVEHICLE_H
#define TOURISHVEHICLE_H
#include "VehicleType.h"
#include <iostream>
// #include "CategoryPermit.h"

class TouristVehicle
{
private:
    std::string _number;
    VehicleType _type;
    int _seat_count;
    float _per_hour_booking_charge;
    // CategoryPermit _permit;
    
public:
    TouristVehicle(
        std::string number,
        VehicleType type,
        int seat_count,
        float per_hour_booking_charge
        // CategoryPermit permit
    );

    ~TouristVehicle() {
        std::cout << "Tourist vehicle with ID " << _number <<" is destroyed\n";
    }

    std::string number() const { return _number; }

    VehicleType type() const { return _type; }

    int seatCount() const { return _seat_count; }

    float perHourBookingCharge() const { return _per_hour_booking_charge; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);

    // CategoryPermit permit() const { return _permit; }

   
    
};

// std::string DisplayEnumPermit(const CategoryPermit cPermit);
std::string DisplayEnum(const VehicleType cVehicle);
#endif // TOURISHVEHICLE_H
