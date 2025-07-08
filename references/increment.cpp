#include <iostream>

#define LOG(x) std::cout << x << std::endl;

/*void Increment(int value)
{
    value++;
}*/

/*void Increment(int* value)
{
    (*value)++; //dereferencing the pointer first then increment.
}*/

void Increment(int& value)
{
    value++;  // easy and much more clean by using references.
}

int main()
{
    int a = 5;
    LOG(a);
    Increment(a); // putting the memory address.
    LOG(a);

    std::cin.get();
}