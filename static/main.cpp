#include <iostream>

//int s_Variable = 10;
extern int s_Variable; //look for external definition outside of this translation unit

/*void Function()
{
    std::cout << "Hey this is main file not the static one\n";
}*/

void Function();
int main()
{
    std::cout << s_Variable << std::endl;
    Function();
    std::cin.get();
}