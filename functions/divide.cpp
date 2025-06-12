#include <iostream>

int divide(int a, int b)  // basic divide function
{
    return a / b;
}

int simple_divide() // simple divide function
{
    return 81 / 9;
}

void no_return_type_divide(int a, int b) // function with no data type
{
    std::cout << a / b << std::endl;
}

#if 1
void divide_and_log(int a, int b)
{
    int result = divide(a, b);
    std::cout << result << std::endl;
}
#endif

int main()
{
    int result  = divide(5,1);
    std::cout << result << std::endl;

    result  = divide(21,3);
    std::cout << result << std::endl;

    result  = divide(48,4);
    std::cout << result << std::endl;

    result = simple_divide();
    std::cout << result << std::endl;

    no_return_type_divide(15,2);

    divide_and_log(12, 4);
    divide_and_log(8,4);

}
