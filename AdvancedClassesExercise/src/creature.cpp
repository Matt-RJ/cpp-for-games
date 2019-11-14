#include "creature.hpp"

Creature::Creature(std::string strName, const Point2D &cLocation)
: m_strName(strName), m_cLocation(cLocation)
{
}

std::ostream& operator<<(std::ostream& out, const Creature &cCreature)
{
	out << cCreature.m_strName << " is at " << cCreature.m_cLocation; // calls the overloaded << for a Point2D object
	return out;
}

void Creature::MoveTo(int nX, int nY)
{
	m_cLocation.SetPoint(nX, nY);
}