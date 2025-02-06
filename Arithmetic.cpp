#include <arithmetic.h>

void Arithmetic::setComplexRe(Complex *a)
{
    cout << "entrer le nombre complex  reel: ";
    cin >> a->re;
}

void Arithmetic::setComplexIm(Complex *a)
{    
    cout << "entrer le nombre complex  imaginaire: ";
    cin >> a->im;
}

void setInt(double b)
{
    cin >> b;
}

Arithmetic add(Complex a, int b)
{
    cout << a.re + b; << " + i" << b;
}
