#include <iostream>
#include "Card.h"
#include "Functionalities.h"
#include "NoMatchingCardException.h"
#define SIZE 5

int main()
{

    Card *container[SIZE];

    try
    {

        CreateObjects(container);

        Card *arr[SIZE] = {};
        // std::cout<<*container[0];

        for (int i = 0; i < SIZE; i++)
        {

            std::cout << *(container[i]) << std::endl;
        }

        ReturnCertainType(container, IssuerType::VISA, arr);
        std::cout << "Card with type VISA are \n";
        for (int i = 0; i < SIZE; i++)
        {

            if (arr[i] == nullptr)
            {
                break;
            }
            else
            {

                std::cout << "\n";
                std::cout << *arr[i];
                std::cout << "\n";
            }
        }

        CertainCard(container, 6677);
        std::cout << CVVFinder(container) << std::endl;
        std::cout<<"tax on debit card\t"<<container[0]->CalculateTaxOnCharge()<<"\t\n";
        FreeMemory(container);
        
    }
    catch (std::runtime_error &ex)
    {
        ex.what();
    }
    catch (NoMatchingCardException &cs)
    {
        cs.what();
    }
    
}