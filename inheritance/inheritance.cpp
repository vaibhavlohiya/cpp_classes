#include <iostream>

class Entity //Parent class
{
public:
    float X, Y;

    Entity()
    {
        X = 4.0f;
        Y = 9.0f;
    }

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
        std::cout << X << "," << Y << std::endl;
    }
};

class Player : public Entity //Daughter class
{
public : 
    const char* Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{
    std::cout << sizeof(Player) << std::endl;

    Player play;
    play.Move(8.0f, 4.0f);

    std::cin.get();
}