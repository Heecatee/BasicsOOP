#pragma once
#include "MapDistance.h"
#include <iostream>
#include <cmath>

using namespace std;

class MapPoint{
    public:
        MapPoint();
        void print();
        void set_latitude(double x);
        void set_longitude(double y);
        void set_coordinates(double x, double y);
        MapDistance distance(MapPoint point);
        MapPoint farthest(MapPoint pointA, MapPoint pointB);
    private:
        double lat_;
        double long_;
};