// Ch9Q1Inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <numeric>

enum Items
{
    healthPotions,
    torches,
    arrows,
    last
};

int countTotalItems(std::array<int, Items::last> inventory)
{
    //return (inventory[Items::healthPotions] + inventory[Items::torches] + inventory[Items::arrows]);
    return (std::reduce(inventory.begin(), inventory.end()));
}

int main()
{
    std::array<int, Items::last> inventory {2, 5, 10};

    std::cout << countTotalItems(inventory) <<"\n";
    std::cout << inventory[Items::torches];

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
