// Creature Location
// Builds ability to create header and source files and to work with friend functions and operator overloading
// Demonstrates composition

#include <string>
#include "creature.hpp"

int main()
{
    std::cout << "Enter a name for your creature: ";
    std::string cName;
    std::cin >> cName;
    Creature cCreature(cName, Point2D(4, 7)); // parent and child created at same time => composition
    
    while (1)
    {
        std::cout << cCreature << std::endl;  // calls the overloaded <<
        std::cout << "Enter new X location for creature (-1 to quit): ";
        int nX=0;
        std::cin >> nX;
        if (nX == -1)
            break;
        
        std::cout << "Enter new Y location for creature (-1 to quit): ";
        int nY=0;
        std::cin >> nY;
        if (nY == -1)
            break;
        
        cCreature.MoveTo(nX, nY);
    }
    
    return 0;
}