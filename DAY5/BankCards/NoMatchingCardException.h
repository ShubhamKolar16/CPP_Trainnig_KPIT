#ifndef NOMATCHINGCARDEXCEPTION_H
#define NOMATCHINGCARDEXCEPTION_H

#include <iostream>

class NoMatchingCardException : public std::exception
{
private:
    char *_msg;

public:
    // char* what(){
    //     return "No matching card found\n";
    // }
    char *what()
    {
        return _msg;
    }

    NoMatchingCardException(char *msg) : _msg(msg) {}
    ~NoMatchingCardException() {}
};

#endif // NOMATCHINGCARDEXCEPTION_H