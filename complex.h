#include <iostream>

using namespace std;

namespace isa
{
    class Complex
    {
        public:
            double re, im;
            Complex(){re = -1, im = -1;};
            void setRe(Complex *a, Complex *b);
            void setIm(Complex *a, Complex *b);
            Complex add(Complex a, Complex b);
            Complex diff(Complex a, Complex b);
            Complex multi(Complex a, Complex b);
            Complex div(Complex a, Complex b);

            ~Complex(){};
    };}