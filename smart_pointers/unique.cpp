#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
    Entity() //Constructor
    {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity() //Destructor
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print() {}

};

int main()
{
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // unique pointer

        entity->Print();
    }

    std::cin.get();
}