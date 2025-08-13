#include <iostream>

int main()
{
    int example[5];
    example[0] = 2;
    example[4] = 6;

    example[-1] = 1; //This is a memory access violation.
    example[5] = 9;

    std::cout << example[0] << std::endl;
    std::cout << example << std::endl;

    for (int i = 0; i < 5; i++) //storing data contiguously
        example[i] = 2;

    std::cout << example << std::endl;

    //Pointer to array
    int* ptr = example;

    example[2] = 7; //they are exactly the same
    *(ptr + 2) = 7;
    *(int*)((char*)ptr + 8) = 7; //dont get scared!

    int* another = new int[5];
    delete[] another;

    std::cin.get();
}