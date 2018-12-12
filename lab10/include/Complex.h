#pragma once
#include "Rational.h"
#include <cmath>

class Complex{
    public:
        Complex (double);
        Complex (double, double);
        Complex (const Rational&);
        void Print() const;
        double Im(){return im_;};
        explicit operator double();
        Complex operator +(const Complex&);
        Complex operator *(const Complex&);
        static double Modulo(const Complex&);
    private:
        double im_;
        double re_;
};