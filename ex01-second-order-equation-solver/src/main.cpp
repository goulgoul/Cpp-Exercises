#include "polynomial.h"
int main(void)
{
    Polynomial P;
    std::cout << "Please input the values of the polynomial you want to solve.\n";
    std::cin >> P;

    P.Solve();

    return 0;
}
