#include <iostream>

void Log(const char* message); // declaration of a function called Log which is in another .cpp file

int Multiply(int a, int b)  // Static is used if we want to use this Multiply function only in this .cpp file and not any other file.
{
    Log("Multiply");
    return a * b;
}

int main() // main function is a entry point for our c++ programs which means the compiler starts reading the code from the main function, although it is not necessary that main always has to be the entry point but it is mostly the case.
{
    std::cout << Multiply(4, 7) << std::endl;
    std::cin.get();
}