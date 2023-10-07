#include <iostream>
float square(float number)
{
    return number * number;
}

float cube(float number)
{
    return number * number * number;
}
int Factorial(int number)
{

    if (number < 0)
    {

        std::runtime_error("Negative numbers are not allowed");
    }
    else if (number == 1)
    {
        return 1;
    }

    return number * Factorial(number - 1);
}

void SwitchMenu()
{
    bool flag = true;
    while (flag)
    {
        int choice = 0;
        float number;
        std::cout << "Enter 1 for Sqaure\nEnter 2 for Cube \nEnter 3 for Factorial\nEnter 0 quit\n";
        std::cin >> choice;
        if (choice == 0)
        {
            std::cout << "Exiting the program\n";
            break;
        }
        std::cout << "Enter the number to calculate\n";
        std::cin >> number;

        switch (choice)
        {
        case 0:

            flag = false;

            // exit(0); // exit with zero errors;

        case 1:
            std::cout << "Square of " << number << " is " << square(number) << std::endl;
            break;
        case 2:
            std::cout << "Cube of " << number << " is " << cube(number) << std::endl;
            break;
        case 3:
            try
            {
                std::cout << "Factorial of " << static_cast<int>(number) << " is " << Factorial(static_cast<int>(number)) << std::endl;
            }
            catch (std::runtime_error &ex)
            {
                std::cout << ex.what() << std::endl;
            }

            break;
        default:
            std::cout << "Enter a valid  choice\n";
        }
    }
}

int main()
{
    SwitchMenu();
}