#include "MapPoint.h"

MapPoint::MapPoint(){}

void MapPoint::set_latitude(double x){
    lat_ = x;
}

void MapPoint::set_longitude(double y){
    long_ = y;
}

void MapPoint::set_coordinates(double x, double y){
    lat_ = x;
    long_ = y;
}

void MapPoint::print(){
    cout << "Point: (" << lat_ << ", " << long_ << ")" << endl; 
}

MapDistance MapPoint::distance(MapPoint point){
    double x_diff = point.lat_ - this->lat_;
    x_diff = (x_diff > 0) ? x_diff : x_diff *(-1); 
    
    double y_diff = point.long_ - this->long_;
    y_diff = (y_diff > 0) ? y_diff : y_diff *(-1); 
    
    MapDistance distance (x_diff, y_diff);
    return distance;
}

MapPoint MapPoint::farthest(MapPoint pointA, MapPoint pointB){
    double diffA =
        sqrt((pointA.lat_ - this->lat_)*(pointA.lat_ - this->lat_) + (pointA.long_ - this->long_)*(pointA.long_ - this->long_));
    
    double diffB = 
        sqrt((pointB.lat_ - this->lat_)*(pointB.lat_ - this->lat_) + (pointB.long_ - this->long_)*(pointB.long_ - this->long_));        

    MapPoint point;
    diffA > diffB ? 
        point.set_coordinates(pointA.lat_, pointA.long_) : point.set_coordinates(pointB.lat_, pointB.long_);

    return point;
}