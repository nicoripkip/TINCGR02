#include <string>
#include <vector>
#include <cmath>
#include "shapes.hpp"


Sphere::Sphere(double radius, int x, int y, int z) 
    : _radius(radius)
{
    this->_coords.x = x;
    this->_coords.y = y;
    this->_coords.z = z;
}


void draw()
{

}