#include "MapDistance.h"

MapDistance::MapDistance(){
    lat_diff_ = 0;
    long_diff_ = 0;

}

MapDistance::MapDistance(double x, double y){
    lat_diff_ = x;
    long_diff_ = y;

}

void MapDistance::print(){
    cout << "Distance: (" << lat_diff_ << ", " << long_diff_ << ")" << endl; 
}