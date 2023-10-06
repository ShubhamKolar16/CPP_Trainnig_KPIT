#include <iostream>
#include "Customer.h"
#include "CustomerType.h"


Customer::Customer(int customerId, std::string customerName, float customerCreditScores, CustomerType customerType)
: _customerId(customerId), _customerName(customerName), _customerCreditScores(customerCreditScores), _customerType(customerType)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_customerId: " << rhs._customerId
       << " _customerName: " << rhs._customerName
       << " _customerCreditScores: " << rhs._customerCreditScores
       << " _customerType: " << DisplayEnum(rhs._customerType);
    return os;
}

std::string DisplayEnum(const CustomerType type)
{
    if(type == CustomerType::PREMIUM){
        return "PREMIUM";
    }
    else if(type == CustomerType::REGULAR){
        return "REGULAR";
    }
    else{
        return "VIP";
    }
}
