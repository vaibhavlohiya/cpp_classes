#include <iostream>
int main()
{


    int i = 0;
    while (i < 5)
    {
        std::cout << "Hello from the whiled side!" << std::endl;
        i++;
    }

    std::cout << "=============================" << std::endl;

    int j = 0;
    while (j < 7)
    {
        if (((j+1) % 2) == 0) break;
        std::cout << "Wait, I broke the loop" << std::endl;
        std::cout << j << std::endl;
        j++;
    }

    bool condition = false;
    do 
    {
        //return 0;
        std::cout << "Hello for the last time, get me out!" << std::endl;
    } while (condition);

    std::cin.get();

}