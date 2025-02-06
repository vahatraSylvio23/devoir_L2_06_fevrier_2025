#include "complex.h"

using namespace isa;


int main()
{
    Complex a, b, C, d;
    C.setIm(&a, &b);
    C.setRe(&a, &b);
    d = C.add(a, b);
    d = C.diff(a, b);
    d = C.multi(a, b);
    d = C.div(a, b);
    return 0;
}