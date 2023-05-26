#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction() 
{
    numerator = 0.0;
    denominator = 1.0;
}


void Fraction::simplify() 
{
    double gcd = findGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}


double Fraction::findGCD(double a, double b) 
{
    while (true) 
    {
        if (a == b)
            return a;
        else if (a > b)
            a -= b;
        else
            b -= a;
    }
}


Fraction::Fraction(double num, double denom) 
{
    numerator = num;
    denominator = denom;
    simplify();
}

void Fraction::inputFraction() 
{
    int choice;
    cout << "Is the number an integer? (Enter 1 for Yes, 0 for No): ";
    cin >> choice;

    if (choice == 1) {
        int number;
        cout << "Enter the number: ";
        cin >> number;

        numerator = number;
        denominator = 1;
    }
    else {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    simplify();
}





Fraction Fraction::operator+(Fraction fraction) 
{
    double newNumerator = (numerator * fraction.denominator) + (fraction.numerator * denominator);
    double newDenominator = denominator * fraction.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator-(Fraction fraction)
{
    double newNumerator = (numerator * fraction.denominator) - (fraction.numerator * denominator);
    double newDenominator = denominator * fraction.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator*(Fraction fraction) 
{
    double newNumerator = numerator * fraction.numerator;
    double newDenominator = denominator * fraction.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator/(Fraction fraction) 
{
    double newNumerator = numerator * fraction.denominator;
    double newDenominator = denominator * fraction.numerator;
    return Fraction(newNumerator, newDenominator);
}

void Fraction::display() 
{
    cout << numerator << "/" << denominator;
}
