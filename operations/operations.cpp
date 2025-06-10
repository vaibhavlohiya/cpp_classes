#include <iostream>

int main()
{
    int number_1, number_2;
    std::cout << "Enter two numbers" << std::endl;
    std::cout << "First number: ";
    std::cin >> number_1;
    std::cout << "Second number: ";
    std::cin >> number_2;

    std::cout << "The result is " << number_1 / number_2 << std::endl;
}