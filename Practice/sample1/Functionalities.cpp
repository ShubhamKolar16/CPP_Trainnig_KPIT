#include "Functionalities.h"
#include "Customer.h"
#include "CustomerType.h"
#define SIZE 3

void CreateObjects(Customer *arr[SIZE])
{
    arr[0] = new Customer{123, "shubham", 125.0f, CustomerType::REGULAR};
    arr[1] = new Customer{111, "Gyan", 105.0f, CustomerType::PREMIUM};
    arr[2] = new Customer{89, "mashood", 50000.0f, CustomerType::REGULAR};
}

void MatchingType(Customer *arr[SIZE], CustomerType customerType, Customer* res[SIZE])
{
    int k=0;
    for(int i=0; i<SIZE; i++){
        if(customerType == arr[i]->customerType()){
            res[k++] = arr[i];
        }
    }
}

void CustomerStoreCredits(Customer *arr[SIZE], Customer *res1[SIZE])
{
    int k=0;
    for(int i=0; i<SIZE; i++){
        if(arr[i]->customerCreditScores() >= 100 && arr[i]->customerCreditScores() <=200 ){
            res1[k++] = arr[i];
        }
    }
}

float Average(Customer *arr[SIZE], CustomerType cType)
{
    int count=0;
    float res=0.0f;
    for(int i=0; i<SIZE; i++){
        if(arr[i]->customerType()==cType){
            count++;
            res += arr[i]->customerCreditScores();  
        }
    }
    return res/count;
}

void freeMemory(Customer *arr[SIZE])
{
    for(int i=0; i< SIZE; i++){
        delete arr[i];
    }
}
