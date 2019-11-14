#ifndef POINT2D_HPP
#define POINT2D_HPP

#include <iostream>

class Point2D
{
private:
    int m_nX;
    int m_nY;
    
public:
    // A default constructor
	Point2D();
    
    // A specific constructor
	Point2D(int nX, int nY);
    
    // An overloaded output operator
	friend std::ostream& operator<< (std::ostream& out, const Point2D &cPoint);
    
    // Access functions
    void SetPoint(int nX, int nY);
    
    int GetX() const;
    int GetY() const;
};

#endif