#ifndef CUSTOMER_H
#define CUSTOMER_H

#define SIZE 3

#include <iostream>
#include "CustomerType.h"

class Customer
{
private:
    int _customerId;
    std::string _customerName;
    float _customerCreditScores;
    CustomerType _customerType;

public:
    Customer(
        int customerId,
        std::string customerName,
        float customerCreditScores,
        CustomerType customerType
        );

// copy constructor
    Customer(const Customer&) = default;

    

    ~Customer() {
        std::cout << "Customer with ID " << _customerId << " destroyed\n";
    }

    int customerId() const { return _customerId; }

    void setCustomerId(int customerId) { _customerId = customerId; }

    std::string customerName() const { return _customerName; }

    void setCustomerName(const std::string &customerName) { _customerName = customerName; }

    float customerCreditScores() const { return _customerCreditScores; }

    void setCustomerCreditScores(float customerCreditScores) { _customerCreditScores = customerCreditScores; }

    CustomerType customerType() const { return _customerType; }

    void setCustomerType(const CustomerType &customerType) { _customerType = customerType; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

std::string DisplayEnum(const CustomerType type);

#endif // CUSTOMER_H
