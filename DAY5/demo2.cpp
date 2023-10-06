#include<iostream>

float square(float number){
    return number * number;
}

float percentage(float number, float pct_factor){
    return number * (pct_factor/100);
}

float cube(float number){
    return number*number*number;
}

int Factorial(int number){
    if(number < 0){
        throw std::runtime_error("Negative number problem");
    }
    else if(number == 1){
        return 1;
    }
    else{
        return number * Factorial(number-1);
    }
}

void SwitchMenu(){

    while(true){
        int choice=0;
        std::cout << "Enter a number: ";
        float number;
        std::cin >> number;
        std::cout << "Enter 1 for square\n2 for Cube\n3 forFactorial\n4 for exit\n";
        std::cin >> choice;

        switch(choice){
            case 1:
                square(number);
                break;
            case 2:
                cube(number);
                break;
            case 3:

                try{
                    Factorial(int(number)); // explicit type casting!
                // Factorial(static_cast<int>(number)) pure C++ casting "STATIC CASTING" "COMPILE TYPE CASTING"
                } catch(std::runtime_error& ex){
                    std::cout << ex.what() << "\n";
                }
                break;
            case 4:
                exit(0);
            default:
                std::cout << "Please try again\n";

        }
    }
}

int main(){
    SwitchMenu();
}