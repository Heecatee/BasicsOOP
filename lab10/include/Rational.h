#pragma once

class Rational{
    public:
        friend class Complex;
        Rational (int, int);
        void Print() const;
    private:
        int nom_;
        int denom_;
};
