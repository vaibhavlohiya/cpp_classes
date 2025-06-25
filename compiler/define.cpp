#define PI 3.1415926526
#define Square(x) (x*x)
#define Radius int

#include <iostream>

#ifdef PI
int main()
{
    Radius r;

    std::cout << "Enter the radius: ";
    std::cin >> r;

    std::cout << "The area of the circle is " << PI*Square(r) << std::endl;
}
#endif