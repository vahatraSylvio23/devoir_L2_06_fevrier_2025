#include <iostream>
#include "complex.h"
#include "rationnel.h"

using namespace isa;
using namespace std;

class Arithmetic
{
    public:
        double re, im;
        float f, g;
        Arithmetic(){};
        void setComplexRe(Complex *a);
        void setComplexIm(Complex *a);
        void setInt(int b);
        Arithmetic add(Complex a, int b);
};