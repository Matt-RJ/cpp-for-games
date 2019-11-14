#ifndef CREATURE_HPP
#define CREATURE_HPP

#include "point2D.hpp"

class Creature
{
private:
    std::string m_strName;
    Point2D m_cLocation;
    
public:
    Creature(std::string strName, const Point2D &cLocation);
    
    friend std::ostream& operator<<(std::ostream& out, const Creature &cCreature);
    
    void MoveTo(int nX, int nY);
};

#endif