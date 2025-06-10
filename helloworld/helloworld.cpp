// This is a simple C++ program that prints "Hello, World!" to the console.

#include <iostream>

//void log(const char* message);


void log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    log("Hello, World!");
    std::cin.get(); // Wait for user input before closing the console
}

