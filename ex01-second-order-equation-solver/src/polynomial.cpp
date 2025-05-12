#include "polynomial.h"

Polynomial::Polynomial(float a, float b, float c)
    : _a(a)
    , _b(b)
    , _c(c)
{
}

Polynomial::~Polynomial()
{
}

float Polynomial::Discriminant(float a, float b, float c)
{
    return b*b - 4 * a * c;
}

void Polynomial::Solve()
{
    float delta = Discriminant(_a, _b, _c);
    if (delta == 0)
    {
        std::cout << "Single real solution:\n";
        std::cout << "x0 = " << -_b/(2*_a) << "\n";
    }
    else if (delta > 0)
    {
        std::cout << "Two real solutions:\n";
        std::cout << "x1 = " << (-_b - std::sqrt(delta))/(2*_a) << "\n";
        std::cout << "x2 = " << (-_b + std::sqrt(delta))/(2*_a) << "\n";
    }
    else 
    {
        std::cout << "Two conjugate complex solutions:\n";
        std::cout << "z1 = " << Complex(-_b/(2*_a), -(std::sqrt(-delta)/(2*_a))) << "\n";
        std::cout << "z2 = " << Complex(-_b/(2*_a), std::sqrt(-delta)/(2*_a)) << "\n";
    }
}

std::istream& operator>>(std::istream& is, Polynomial& p)
{
    std::cout << "a: ";
    is >> p._a;

    std::cout << "b: ";
    is >> p._b;

    std::cout << "c: ";
    is >> p._c;
    std::cout << std::endl;

    return is;
}
