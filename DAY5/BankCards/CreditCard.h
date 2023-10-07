#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "IssuerType.h"
#include "Card.h"
#include <ostream>
class CreditCard : public Card
{
private:
    float _transactionLimit;

public:
    CreditCard(int _number,
               int _cvv,
               IssuerType _iType,
               float _annualCharges,
               int _limit, float tLimit);
    float CalculateTaxOnCharge() override;
    int operator+(const CreditCard c2);
    ~CreditCard() {
        std::cout<<"credit  card destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
};

#endif // CREDITCARD_H