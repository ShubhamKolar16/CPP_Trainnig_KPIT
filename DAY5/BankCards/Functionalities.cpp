#include "Card.h"
#define SIZE 5
#include "DebitCard.h"
#include "CreditCard.h"
#include "NoMatchingCardException.h"

bool CheckNullptr(Card *container[SIZE])
{
    bool flag = true;
    for (int i = 0; i < SIZE; i++)
    {
        if (container[i] != nullptr)
        {
            flag = false;
        }
    }
    return flag;
}

void CreateObjects(Card *container[SIZE])
{

    container[0] = new DebitCard(

        6677,
        453,
        IssuerType::VISA,
        499.0f,
        20000,
        Tier::DELUXE);

        
    container[1] = new DebitCard(

        2677,
        403,
        IssuerType::VISA,
        1999.0f,
        500000,
        Tier::PREMIUM);
    container[2] = new DebitCard(

        9686,
        143,
        IssuerType::MASTERCARD,
        999.0f,
        200000,
        Tier::PREMIUM);

    container[2] = new DebitCard(

        9686,
        143,
        IssuerType::MASTERCARD,
        999.0f,
        200000,
        Tier::PREMIUM);

    container[3] = new CreditCard(

        1525,
        159,
        IssuerType::MASTERCARD,
        999.0f,
        200000,
        110000);
    container[4] = new CreditCard(

        1696,
        233,
        IssuerType::MASTERCARD,
        999.0f,
        2000000,
        250000);


}

void ReturnCertainType(Card *container[SIZE], IssuerType itype, Card **array)
{
    if (CheckNullptr(container))
    {
        throw std::runtime_error("no object in container");
    }

    int k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (container[i] == nullptr)
        {
            continue;
        }
        if ((container[i])->iType() == itype)
        {
            array[k++] = container[i];
        }
    }
}

Card *CertainCard(Card *container[SIZE], int number)
{
    if (CheckNullptr(container))
    {
        throw std::runtime_error("no object in container");
    }

    Card *c = nullptr;

    for (int i = 0; i < SIZE; i++)
    {
        if (container[i] == nullptr)
        {
            continue;
        }

        if ((container[i])->number() == number)
        {
            c = container[i];

            return container[i];
        }
    }

    throw new NoMatchingCardException("no such cards found");
    return c;
}

int CVVFinder(Card *container[SIZE])
{
    if (CheckNullptr(container))
    {
        throw std::runtime_error("no object in container");
    }

    float highestCharged = 0.0f;
    Card *c = container[0];

    float currentVal = container[0]->annualCharges();

    for (int i = 1; i < SIZE; i++)
    {
        if (container[i] == nullptr)
        {
            continue;
        }

        if (currentVal > highestCharged)
        {
            highestCharged = currentVal;
            c = container[i];
        }
    }
    return (c)->cvv();
}

void FreeMemory(Card *container[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {

        delete container[i];
    }
}