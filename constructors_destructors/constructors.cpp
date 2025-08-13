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

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    /*void Init() // Need to run everytime we initialise entity.
    {
        X = 0.0f;
        Y = 0.0f;
    }*/

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

class Log
{
    Log() = delete;
public:
    static void Write()
    {
        //something
    }
};



int main()
{
    //Entity e;
    Entity e(10.0f, 30.0f);
    std::cout << e.X << std::endl;
    e.Print();

    //Log l; //cannot access the non static members as we have deleted the constructor.
    Log::Write();
    std::cin.get();
}