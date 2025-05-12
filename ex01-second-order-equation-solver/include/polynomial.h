#pragma once
#include <iostream>
#include <math.h>
#include "complex.h"

class Polynomial
{
private:
    float _a, _b, _c;

public:
    Polynomial(float = 0, float = 0, float = 0);
    ~Polynomial();

    float Discriminant(float a, float b, float c);
    void Solve();
    friend std::istream& operator>>(std::istream& is, Polynomial& p);
};
