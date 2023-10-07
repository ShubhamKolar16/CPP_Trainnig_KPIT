#include "Card.h"
#include <iostream>
Card::Card(int number, int cvv, IssuerType _iType, float _annualCharges, int limit)
    : _iType(_iType), _annualCharges(_annualCharges), _limit(limit)
{

    if (number >= 1000 && number < 10000)
    {
        _number = number;
    }
    else
    {
        std::runtime_error("number must be of 4 digits and greater than 1000");
    }

    if (cvv >= 100 && cvv < 1000)
    {
        _cvv = cvv;
    }
    else
    {
        std::runtime_error("invalid cvv for card");
    }
}

std::ostream &operator<<(std::ostream &os, const Card &rhs)
{
    os << "_number: " << rhs._number
       << " _cvv: " << rhs._cvv
       << " _iType: " << DisplayEnum1(rhs._iType)
       << " _annualCharges: " << rhs._annualCharges
       << " _limit: " << rhs._limit;
    return os;
}

std::string DisplayEnum1(const IssuerType value)
{
    if (value == IssuerType::VISA)
    {
        return "VISA";
    }
    if (value == IssuerType::MASTERCARD)
    {
        return "MATSERCARD";
    }
    if (value == IssuerType::RUPAY)
    {
        return "RUPAY";
    }
    return "none";
}