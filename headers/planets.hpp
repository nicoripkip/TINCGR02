#pragma once
#ifndef __PLANETS__TINCGR02__
#define __PLANETS__TINCGR02__


#include <string>
#include <vector>
#include "shapes.hpp"


class Planet : public Sphere
{
    private:
        double _mass;           /// Mass of the planet
        std::string _name;
        double _travelSpeed;
        double _rotationSpeed;
        double _momentum;
        std::vector<float> _satelites;

    public:
        Planet(std::string name, double radius, double mass, int x, int y, int z);
        bool intersectGravitationalField();
        void draw();

        void setName(std::string name);
        void setMass(double mass);
        void setTravelSpeed(double speed);
        void setRotationSpeed(double speed);
        std::string getName();
        double getMass();
        double getTravelSpeed();
        double getRotationSpeed();
};


#endif