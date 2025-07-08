#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    char* hbuffer = new char[4]; //heap allocation. I'm asking to allocate 4 bytes of memory for us
    memset(hbuffer, 0, 4);

    int a = 8;

    char buffer[4] = {}; // stack allocation

    //char** ptr = &buffer; //double pointer
    //LOG(*ptr);

    delete[] hbuffer;
    std::cin.get();
}