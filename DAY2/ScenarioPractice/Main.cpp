#include <iostream>
#include "Customer.h"
#include "CustomerType.h"
#include "Functionalities.h"
int main(){
    Customer *customers[5];
    createCustomer(customers);
    Customer** returnedCustomer = readCustomer(customers,CustomerType::REGULAR);
    for(int i=0;i<5;i++){
        if(returnedCustomer[i]!=nullptr){
            std::cout << *(returnedCustomer[i]) <<std::endl; 
        }
    }


    std::cout << "-------------------------\n";
    
    Customer** returnedCustomer2 = readCustomerInRange(customers);
    for(int i=0;i<5;i++){
        if(returnedCustomer[i]!=nullptr){
            std::cout << *(returnedCustomer[i]) <<std::endl; 
        }
    }

    std::cout << "-------------------------\n";

    std::cout<< getAverageStoreCredits(customers);

}