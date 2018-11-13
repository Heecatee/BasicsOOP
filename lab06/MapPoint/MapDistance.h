#pragma once
#include <iostream>

using namespace std;

class MapDistance{
    public:
        MapDistance();
        MapDistance(double x, double y);
        void print();
    private:
        double lat_diff_;
        double long_diff_;

};