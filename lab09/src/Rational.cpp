#include "Rational.h"
#include <iostream>

using namespace std;

Rational::Rational(int nom, int denom) {
    nom_ = nom;
    denom_ = denom;
}

Rational::operator float() {
    return (float (nom_)/float (denom_));
}

void Rational::Print() const {
    cout << nom_ << "/" << denom_ << endl;
}

Rational Fun::averageRational_(0, 1);

unsigned Fun::averageCounter_ = 0;

Rational Fun::Add (const Rational& a, const Rational& b) {
    if (a.denom_ == b.denom_) {
        Rational result(a.nom_ + b.nom_, a.denom_);
        return result;
    }
    else {
        Rational result(a.nom_*b.denom_ + b.nom_*a.denom_, a.denom_*b.denom_);
        return result;
    }
}
Rational Fun::Add (const Rational& a, int b) {
    Rational result (a.nom_ + b*a.denom_, a.denom_);
    return result;
}

Rational Fun::Add (int a, const Rational& b) {
    return Fun::Add(b, a);
}

Rational Fun::Multiply (const Rational& a, const Rational& b) {
    Rational result(a.nom_*b.nom_, a.denom_*b.denom_);
    return result;
}

Rational Fun::Divide (int a, const Rational& b) {
    Rational result(a*b.denom_, b.nom_);
    return result;
}

void Fun::Average(const Rational& a) {
    averageRational_ = Fun::Add(averageRational_, a);
    Fun::averageCounter_++;
}

Rational Fun::Average() {
    Rational result (averageRational_.nom_, averageRational_.denom_*Fun::averageCounter_);
    return result;
};
