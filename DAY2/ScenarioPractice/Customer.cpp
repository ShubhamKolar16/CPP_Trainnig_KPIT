#include "Customer.h"

Customer::Customer(int customer_id, std::string customer_name, CustomerType customer_type, float customer_store_credit)
: _customer_id(customer_id), _customer_name(customer_name), _customer_type(customer_type), _customer_store_credit(customer_store_credit)
{
}
std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_customer_id: " << rhs._customer_id
       << " _customer_name: " << rhs._customer_name
       << " _customer_type: " << GetCustomerType(rhs._customer_type)
       << " _customer_store_credit: " << rhs._customer_store_credit;
    return os;
}

std::string GetCustomerType(const CustomerType value)
{
    if(value==CustomerType::PREMIUM)
        return "PREMIUM";
    else if(value==CustomerType::REGULAR)
        return "REGUALR";
    else
        return "VIP";
}


