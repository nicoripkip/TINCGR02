#pragma once
#ifndef __SHAPES__TINCGR02__
#define __SHAPES__TINCGR02__


#include <vector>


struct Vec3D
{
    int x;
    int y;
    int z;
};


class Sphere
{
    private:
        double _radius;
        Vec3D _coords;
        std::vector<float> _vertices;
        std::vector<float> _normals;
        std::vector<float> _textCoords;

    public:
        Sphere(double radius, int x, int y, int z);
        void draw();

        void setX(int x);
        void setY(int y);
        void setZ(int z);
        void setRadius(double radius);
        int getX();
        int getY();
        int getZ();
        double getRadius();
};


#endif