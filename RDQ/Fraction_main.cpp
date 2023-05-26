#include "Fraction.h"
#include <iostream>

using namespace std;

int main() 
{
    Fraction fraction1;
    cout << "Enter the first fraction:" << endl;
    fraction1.inputFraction();

    Fraction fraction2;
    cout << "Enter the second fraction:" << endl;
    fraction2.inputFraction();

    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction product = fraction1 * fraction2;
    Fraction quotient = fraction1 / fraction2;

    cout << "Sum: ";
    sum.display();
    cout << endl;

    cout << "Difference: ";
    difference.display();
    cout << endl;

    cout << "Product: ";
    product.display();
    cout << endl;

    cout << "Quotient: ";
    quotient.display();
    cout << endl;

    return 0;
}
