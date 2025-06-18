#include <iostream>

int main()
{
    int x = 3;
    bool ifcomparison = x == 4;
    if (ifcomparison)
        std::cout << "x is 3, the statement is true" << std::endl;
    else if (!ifcomparison)
        std::cout << "x is not 3" << std::endl;
    std::cin.get();
}