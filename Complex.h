#ifndef COMPLEXNUMBERS_COMPLEX_H
#define COMPLEXNUMBERS_COMPLEX_H

#include <iostream>

class Complex
{
public:
    Complex();
    Complex(float real, float imaginary);

    friend Complex operator+(const Complex& c1, const Complex& c2);

    friend void operator<<(std::ostream& o, const Complex& c);

    friend Complex operator-(const Complex& c1, const Complex& c2);

    friend void operator+=(Complex& c, Complex& other);

    friend void operator-=(Complex& c, Complex& other);

private:
    float m_Real;
    float m_Imaginary;
};

#endif //COMPLEXNUMBERS_COMPLEX_H
