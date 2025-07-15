#include <iostream>

struct Entity
{
    static int x, y; // static variables x and y. they are just parameters of our class entity.

    static void Print() // a static method cannot access the non static variables.
    {
        std::cout << x << ", " << y << std::endl;
    }
};

static void Print(Entity e) // a static method cannot access the non static variables.
{
    std::cout << e.x << ", " << e.y << std::endl;
}

int Entity::x;   //need to declare the static variables outside the scope.
int Entity::y;

int main()
{
    //Entity e1;  // instance of the class entity.
    Entity::x = 5;
    Entity::y = 9;

    //Entity e2 = {9, 16}; // declaring variables using an initializer.

    //Entity e2;
    Entity::x = 9;
    Entity::y = 16;

    //Entity::x = 5;
    //Entity::y = 7;

    //Entity::Print();
    //Entity::Print();

    Entity::Print();
    Entity::Print();

    std::cin.get();
}