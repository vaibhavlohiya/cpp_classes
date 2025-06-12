#include <iostream>

int main()
{
    int variable = 8; // Ranges from -2 billion to +2 billion
    char a = 'A';  // We can store a character and also assign a value to it.
    unsigned int big_variable = 441341232; // lets you store big number as it does not have a sign
    float decimal = 5.53f; // it is actually a double unless you define it 
    double big_decimal = 3.21135757656654; // 8 bytes long decimal number
    bool bit = false; // 1 byte (either true or false)

    std::cout << variable << std::endl;
    std::cout << a << std::endl;
    std::cout << decimal << std::endl;
    std::cout << big_decimal << std::endl;
    std::cout << bit << std::endl;

    std::cin.get();

}