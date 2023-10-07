#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Employee.h"
#include "Project.h"
#define SIZE 3
//functioj to create SIZE objects in an in arry of project 
//also create SIZE objects of employee in seperate array
//link one project with one emp


void CreateObjects(Employee* e[SIZE]);

/*
a function to return the pointetr to the employee with the highest salary
*/

Employee* HighestPaidEmployee(Employee* e[SIZE]);


/*
a function to return the count of all emp in the array whose _Dept value matches
with the second parameter passed to this function

*/
int CountOfCertainType(Employee* e[SIZE], Department department);

float AverageBudget(Employee* arr[SIZE]);

std::string DisplayEnum(const Department type );


void FreeMemory( Employee* e[SIZE]);

//a function to check if all postions of the array are nullptr

bool CheckNull(Employee *arr[SIZE]);
 

#endif // FUNCTIONALITIES_H