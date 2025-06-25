#include <iostream>
#define CONDITION

int main ()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Hello World!" << std::endl;
    }
    
    std::cout << "===============================" << std::endl;

    #ifdef CONDITION
    int i = 0;
    bool condition = true;
    for ( ; condition; ) // can be run infinitely
    {
        std::cout << "Hello again!" << std::endl;
        i++;
        if (!(i < 5)) condition = false;
    }
    #endif

    std::cout << "===============================" << std::endl;

    #ifdef CONDITION
    for (int i = 0; i < 7; i++)
    {

        if (i%2 == 0) continue;
        std::cout << "Hello just 5 times" << std::endl;
        std::cout << i << std::endl;
    }
    #endif

    std::cin.get();
}