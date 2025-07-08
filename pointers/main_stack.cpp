#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    int var = 8;
    void* nptr = nullptr; //0 (NULL) (nullptr) is not a valid address but thats perfectly fine for pointers. 
    int* ptr = &var; //types do not matter in pointers, we can change it to int and it would be the same
    *ptr = 10;
    LOG(var);
    //LOG(*ptr); //dereferencing the pointer.
    std::cin.get();

}