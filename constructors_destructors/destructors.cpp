#include <iostream>

class Entity
{
public:
    float X, Y;

    Entity() // We have a defualt constructor even when we dont define it but it doesn't do anything.
    {
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Created Entity" << std::endl;
    } 

    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function()
{
    Entity e;
    e.Print();
}

int main()
{
    Function();
}
