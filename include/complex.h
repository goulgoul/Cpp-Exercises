#pragma once
#include <ostream>

class Complex
{
private:
    float _x, _y;

public:
    Complex(float = 0, float = 0);
    ~Complex();

    friend std::ostream& operator<<(std::ostream& os, const Complex& z)
    {
        if (z._x == 0 && z._y == 0)
            return os << "0";
        if (z._x == 0)
            return os << z._y << "i";
        if (z._y == 0)
            return os << z._x;
        else
            return os << z._x << " + " << z._y << "i";
    }
};
