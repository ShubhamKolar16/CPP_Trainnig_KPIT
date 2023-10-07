#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "Executive.h"
#include "Manager.h"
#include "Employee.h"
#include <ostream>

/*
in multiple inheritence in cpp the most derived class is responsible for instantiating the most base /classes
*/

class Director : public Manager, public Executive
{
private:
    float _budget;

public:
    Director(std::string id,
            std::string name,
            int size,
            std::string location,
             float budget
            ) : 
            Employee(id, name),
            Manager(size),
            Executive(location),
            _budget(budget)
                                                                            
                                                                            

    {
         std::cout<<"director created\n";
    }

    void CalculateTax() override
    {
        std::cout << "director pays the tax\n";
    }

    ~Director()
    {

        std::cout << "director destroyed\n";
    }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Director &rhs)
{
    os <<static_cast<const Employee &>(rhs)
       << static_cast<const Manager &>(rhs)
       << static_cast<const Executive &>(rhs)
       << "[ _budget: " << rhs._budget << "]";
       return os;
}

#endif // DIRECTOR_H