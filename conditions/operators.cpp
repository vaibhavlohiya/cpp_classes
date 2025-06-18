#include <iostream>

int main()
{
    int x = 7, y = 3;
    if (x > 2 && y < 2)
        std::cout << "First statement is true" << std::endl;
    if (x >= 9 || y <= 3)
        std::cout << "Second statment is true" << std::endl;
    else if (x != 3 || y == 3)
        std::cout << "Third statemnt is true" << std::endl;
    else    std::cout << "None of them is true" << std::endl;

    std::cin.get();
    
}