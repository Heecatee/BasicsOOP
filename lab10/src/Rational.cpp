#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational(int nom, int denom) {
    nom_ = nom;
    denom_ = denom;
}

void Rational::Print() const {
    cout << nom_ << "/" << denom_ << endl;
}
