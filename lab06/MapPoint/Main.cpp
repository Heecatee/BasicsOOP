#include <iostream>
#include "MapPoint.h"
 
int main() {
  using std::cout;
 
  cout<<"========== KRK ========================\n";
  MapPoint krk;
  krk.set_latitude(19.938333);
  krk.set_longitude(50.061389);
  krk.print();
 
  cout<<"========== NYC ========================\n";
  const double nyc_latitude = 40.7127;
  const double nyc_longitude = -74.0059;
  MapPoint nyc;
  nyc.set_coordinates(nyc_latitude, nyc_longitude);
  nyc.print();
 
  cout<<"========== PORTO & IRKUTSK ============\n";
  MapPoint porto;
  porto.set_coordinates(41.162142, -8.621953);
  porto.print();
  MapPoint irkutsk;
  irkutsk.set_coordinates(52.283333, 104.283333);
  irkutsk.print();
 
  cout<<"========== DISTANCE ===================\n";
  MapDistance nyc_porto;
  nyc_porto.print();
  nyc_porto = nyc.distance(porto);
  nyc_porto.print();
 
  cout<<"========== FARTHEST ===================\n";
  krk.farthest(porto, irkutsk).print();
 
  return 0;//*/
}
 
/** Wynik dzialania programu:
brachwal@vbox:[build]$ ./Mapa
========== KRK ========================
Point: (19.9383, 50.0614)
========== NYC ========================
Point: (40.7127, -74.0059)
========== PORTO & IRKUTSK ============
Point: (41.1621, -8.62195)
Point: (52.2833, 104.283)
========== DISTANCE ===================
Distance : (0, 0)
Distance : (0.449444, 65.3839)
========== FARTHEST ===================
Point: (52.2833, 104.283)
 
*/