#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include<iostream>
#include "Employee.h"
class Executive: virtual public Employee
{
private:
    std::string _location;

public:
    Executive( std::string _id,
    std::string _name, std::string location):

    Employee(_id, _name ), _location(location) 
    
    { std::cout<<"executive created\n";}
    Executive(std::string location):Employee(), _location(location){ std::cout<<"executive created\n";}
    void CalculateTax() override{
        std::cout<<"executive pays the tax"<<std::endl;
    }
    virtual ~Executive() {

        std::cout<<"executive destoryed\n";
    }

    std::string location() const { return _location; }

    friend std::ostream &operator<<(std::ostream &os, const Executive &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Executive &rhs) {
    os <<" [_location: " << rhs._location<<"]";
    return os;
}

#endif // EXECUTIVE_H