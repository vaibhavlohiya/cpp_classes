#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player
{
public:                     // by default the visibility of a class is private
    int x, y;               //position of the player.
    int speed;              // speed of the player.

    Player()                // called once we instantiate the object of the class 
    {
        LOG("Player is created");
    }

    Player(int z) //copy constructor
    {

    }

    ~Player()               // gets destroyed at the end.
    {
        LOG("Player is destroyed");
    }

    void Move(int xa, int ya) // functions inside the class are called methods of that class.
    {
        x += xa * speed;
        y += ya * speed;
    }
};

/*void Move(Player& player, int xa, int ya)  // function to move the player. 
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}*/

int main()
{
    Player player;  // Object of the class player and a new object is called and instance.
    player.x = 5;   // Setting the variables now.
    player.y = 9;   
    player.speed = 4; //setting speed.
   
    player.Move(1, -1);
    std::cin.get();
}