#include <string>
#include "planets.hpp"


Planet::Planet(std::string name, double radius, double mass, int x, int y, int z)
    : _name(name), _mass(mass), Sphere(radius, x, y, z) 
{
    ///
}


bool Planet::intersectGravitationalField()
{
    return true;
}


void Planet::draw()
{
    this->draw();
}


void Planet::setName(std::string name)
{
    this->_name = name;
}


/**
 * 
 **/
void Planet::setMass(double mass)
{
    this->_mass = mass;
}


/**
 * 
 **/
void Planet::setTravelSpeed(double speed)
{

}