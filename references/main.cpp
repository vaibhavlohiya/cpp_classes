#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    int a = 5;
    //int b = 8;
    int& ref = a; // ref is actually not a variable it is reference to a so in compilation we only have one variable a instead of a and ref
    //ref = b; //You cannot do that.
    ref = 2; // ref is just an alias.
    LOG(ref);


    LOG(a);

    std::cin.get();
}