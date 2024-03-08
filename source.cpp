#include "Complex.h"

Complex::Complex() : m_Real(0.0), m_Imaginary(0.0) {}

Complex::Complex(float real, float imaginary) : m_Real(real), m_Imaginary(imaginary) {}

Complex operator+(const Complex& c1, const Complex& c2)
{
    return {c1.m_Real + c2.m_Real, c1.m_Imaginary + c2.m_Imaginary};
}

Complex operator-(const Complex& c1, const Complex& c2)
{
    return {c1.m_Real - c2.m_Real, c1.m_Imaginary - c2.m_Imaginary};
}

void operator+=(Complex& c, Complex& other)
{
    c = c + other;
}

void operator-=(Complex& c, Complex& other)
{
    c = c - other;
}

void operator<<(std::ostream& o, const Complex& c)
{
    if (c.m_Imaginary != 1)
    {
        o << c.m_Real << " + " << c.m_Imaginary << "i" << std::endl;
    } else
    {
        o << c.m_Real << " + " << "i" << std::endl;
    }

}