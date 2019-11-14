#include "point2D.hpp"

Point2D::Point2D()
: m_nX(0), m_nY(0)
{
}

// A specific constructor
Point2D::Point2D(int nX, int nY)
: m_nX(nX), m_nY(nY)
{
}

std::ostream& operator<< (std::ostream& out, const Point2D &cPoint)
{
	out << "(" << cPoint.GetX() << ", " << cPoint.GetY() << ")";
	return out;
}

// Access functions
void Point2D::SetPoint(int nX, int nY)
{
	m_nX = nX;
	m_nY = nY;
}

int Point2D::GetX() const { return m_nX; }
int Point2D::GetY() const { return m_nY; }