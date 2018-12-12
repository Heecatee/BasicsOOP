#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double re) {
    re_ = re;
    im_ = 0;
}

Complex::Complex(double re, double im) {
    re_ = re;
    im_ = im;
}

Complex::Complex(const Rational& rational) {
    re_ = double(rational.nom_)/rational.denom_;
    im_ = 0;
}

Complex::operator double(){
    return re_;
}

Complex Complex::operator*(const Complex& complex){
    double re = re_ * complex.re_ - im_ * complex.im_;
    double im = re_ * complex.im_ - im_ * complex.re_;

    Complex result(re, im);   
    return result;
}

Complex Complex::operator+(const Complex& complex){
    Complex result(re_ + complex.re_, im_ + complex.im_);
    return result;
}

void Complex::Print() const {
    if(im_ != 0)
        cout << re_ << "+i" << im_ << endl;
    else
        cout << re_ << endl;
}

double Complex::Modulo(const Complex& complex){
    return sqrt(complex.re_ * complex.re_ + complex.im_ * complex.im_);
}