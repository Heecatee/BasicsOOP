#pragma once

class Rational {
    public:
        friend class Fun;
        Rational (int, int);
        operator float();
        void Print() const;
    private:
        int nom_;
        int denom_;
};

class Fun {
    public:
        static Rational Add(const Rational&, const Rational&);
        static Rational Add(const Rational&, int);
        static Rational Add(int, const Rational&);
        static Rational Multiply(const Rational&, const Rational&);
        static Rational Divide(int, const Rational&);
        static void Average(const Rational&);
        static Rational Average();
    private:
        static Rational averageRational_;
        static unsigned averageCounter_;
};