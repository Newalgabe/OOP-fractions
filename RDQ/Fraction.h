#pragma once
class Fraction 
{
private:
    double numerator;
    double denominator;

public:
    Fraction();
    void simplify();

    double findGCD(double a, double b);

    Fraction(double num, double denom);
    void inputFraction();

    Fraction operator+(Fraction fraction);
    Fraction operator-(Fraction fraction);
    Fraction operator*(Fraction fraction);
    Fraction operator/(Fraction fraction);
    void display();
};
