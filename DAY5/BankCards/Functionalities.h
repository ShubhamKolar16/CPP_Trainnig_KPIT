#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include <iostream>
#define SIZE 5

bool CheckNullptr(Card *container[SIZE]);

void CreateObjects(Card *container[SIZE]);

void ReturnCertainType(Card *container[SIZE], IssuerType itype, Card **res);

// card with certain number
Card *CertainCard(Card *container[SIZE], int number);

// cvv of highest annual charged card

int CVVFinder(Card *container[SIZE]);

void FreeMemory(Card *container[SIZE]);

#endif // FUNCTIONALITIES_H