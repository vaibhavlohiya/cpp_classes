#include <iostream>

int main()
{
    int value = 5;
    int* ptr = &value;  // Pointer stores the address of 'value'

    std::cout << "Address of value: " << &value << std::endl;
    std::cout << "Pointer (ptr): " << ptr << std::endl;
    std::cout << "Value via pointer (*ptr): " << *ptr << std::endl;

    // Modifying the value through the pointer
    *ptr = 10;
    std::cout << "New value: " << value << std::endl;

    // Pointer arithmetic example
    int array[3] = {1, 2, 3};
    int* arrPtr = array;  // Points to the first element

    std::cout << "Array elements via pointer:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << *(arrPtr + i) << " ";  // Pointer arithmetic
    }

    std::cin.get();
}