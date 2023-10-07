#include <iostream>
#include "Employee.h"
#include "Director.h"
#include "Manager.h"
#include "Executive.h"

int main()
{

    Director *d1 = new Director(

        "D101",
        "Harshit",
        16,
        "Pune",
        9778766.0f);

    std::cout << "Direcotor object\t" << *d1 << std::endl;
    d1->CalculateTax();
    std::cout << "\n";
    std::cout << "id from employee\t" << d1->id() << std::endl;
    std::cout << "team size from manager\t" << d1->teamSize() << std::endl;
    std::cout << "location from executive\t" << d1->location() << std::endl;
    std::cout << "budget from director\t" << d1->budget() << std::endl;
    std::cout << "\ncalculate tax from manager\t";
    d1->Manager::CalculateTax();
     std::cout << "\nObject destruction\n";

    delete d1;
}