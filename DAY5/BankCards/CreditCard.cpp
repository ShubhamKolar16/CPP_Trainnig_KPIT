#include "CreditCard.h"

CreditCard::CreditCard(int _number, int _cvv, IssuerType _iType, float _annualCharges, int _limit, float tLimit)
    : Card(_number, _cvv, _iType, _annualCharges, _limit), _transactionLimit(tLimit)
{
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs)
{
   os << static_cast<const Card &>(rhs)
      << " _transactionLimit: " << rhs._transactionLimit;
   return os;
}

float CreditCard::CalculateTaxOnCharge()
{
   if (CreditCard::iType() == IssuerType::VISA)
   {
      return CreditCard::annualCharges() * CreditCard::limit() / 100;
   }
   else if (CreditCard::iType() == IssuerType::RUPAY || CreditCard::iType() == IssuerType::MASTERCARD)
   {
      return CreditCard::annualCharges() * CreditCard::limit() / 50;
   }
   return 0;
}

int CreditCard::operator+(const CreditCard c2)
{
   return limit() + c2.limit();
}