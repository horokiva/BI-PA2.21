#include <iostream>
#include "Complex.h"

int main()
{
    Complex complex1(2.0, 3.5);
    Complex complex2(1.5, 2.5);

    Complex sum = complex1 + complex2;
    Complex dif = complex1 - complex2;

    std::cout << sum;
    std::cout << dif;
    sum += dif;
    std::cout << sum;

    sum -= dif;
    std::cout << sum;




    return 0;
}
