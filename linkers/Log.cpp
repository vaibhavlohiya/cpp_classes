#include <iostream>

void Log(const char* message) // We change our definition name as Logr and see we get an error, also if we change the return type for example from void to int and also the parameters, we get the same linking errors.
{
    std::cout << message << std::endl;
}


