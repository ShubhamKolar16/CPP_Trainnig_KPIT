#include "DebitCard.h"

DebitCard::DebitCard(int _number, int _cvv, IssuerType _iType, float _annualCharges, int _limit, Tier _tier)
    : Card(_number, _cvv, _iType, _annualCharges, _limit), _tier(_tier)
{
}

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs)
{
   os << static_cast<const Card &>(rhs)
      << " _tier: " << DisplayEnum2(rhs._tier);
   return os;
}

float DebitCard::CalculateTaxOnCharge()
{
   float ans = 0.0f;
   if (DebitCard::iType() == IssuerType::VISA)
   {
      ans = DebitCard::annualCharges() * DebitCard::limit() / 100;
   }
   else if (DebitCard::iType() == IssuerType::RUPAY || DebitCard::iType() == IssuerType::MASTERCARD)
   {
      ans = DebitCard::annualCharges() * DebitCard::limit() / 50;
   }
   return ans;
}

std::string DisplayEnum2(const Tier value)
{

   if (value == Tier::DELUXE)
   {
      return "DELUXE";
   }
   if (value == Tier::PREMIUM)
   {
      return "PREMIUM";
   }
   if (value == Tier::SIGNATURE)
   {
      return "SIGNATURE";
   }
   return "none";
}