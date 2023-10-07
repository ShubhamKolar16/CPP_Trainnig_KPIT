#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <ostream>
class Manager: virtual public Employee
{
private:
int _teamSize;

public:
    Manager()=default;
    Manager(std::string _id,
    std::string _name, int teamSize):Employee(_id, _name ), _teamSize(teamSize)  { std::cout<<"manager created\n";}

    Manager(int teamSize):_teamSize(teamSize){ std::cout<<"manager created\n";}
   void CalculateTax() override{
        std::cout<<"manager pays the  20 % tax"<<std::endl;
   }

    virtual ~Manager() {
        std::cout<<"manager destroyed\n";
    }

    int teamSize() const { return _teamSize; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
    os  
       << "[ _teamSize: " << rhs._teamSize<<"]";

    return os;
}

#endif // MANAGER_H