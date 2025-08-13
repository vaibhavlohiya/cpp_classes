#include <iostream>

enum Example : unsigned char
{
    A, B, C // if you dont specify a value the first one will be 0 and it will increment. 
};

/*int a = 0;
int b = 1;
int c = 2;*/

int main()
{
    Example value = B;

    if (value == 6)
    {
        //Do something
    }

    std::cin.get();
}