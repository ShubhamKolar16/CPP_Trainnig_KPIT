#ifndef CARD_H
#define CARD_H
#include "IssuerType.h"
#include <iostream>

class Card
{
private:
    int _number;
    int _cvv;
    IssuerType _iType;
    float _annualCharges;
    int _limit;

public:
    Card() = default;
    Card(
        int number,
        int cvv,
        IssuerType _iType,
        float _annualCharges,
        int _limit);
    virtual float CalculateTaxOnCharge() = 0;

    virtual ~Card()
    {

        std::cout << "card object destroyed\n";
    }

    int number() const { return _number; }

    IssuerType iType() const { return _iType; }

    int cvv() const { return _cvv; }

    float annualCharges() const { return _annualCharges; }

    int limit() const { return _limit; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
};

std::string DisplayEnum1(const IssuerType value);

#endif // CARD_H