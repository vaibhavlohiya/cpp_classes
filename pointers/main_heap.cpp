#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    char* buffer = new char[4]; //heap allocation. I'm asking to allocate 4 bytes of memory for us
    memset(buffer, 0, 4);

    char** ptr = &buffer; //double pointer
    LOG(*ptr);

    delete[] buffer;
    std::cin.get();
}