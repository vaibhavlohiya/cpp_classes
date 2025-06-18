#include <iostream>


int main() 
{
    int choice;

    std::cout << "Menu:\n";
    std::cout << "1. Start Game\n";
    std::cout << "2. Load Game\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) 
    {
        case 1:
            std::cout << "Starting game...\n";
            break;
        case 2:
            std::cout << "Loading game...\n";
            break;
        case 3:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
    }

}