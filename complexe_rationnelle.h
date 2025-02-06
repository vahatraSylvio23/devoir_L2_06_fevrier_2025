#include <iostream>

using namespace std;
namespace isa
{
    class Complex
    {
        public:
            double re_den,re_num, im_den, im_num;
            Complex(){re_num = -1, im_num = -1, re_den = -1, im_den = -1;};

            void setRe_num1(Complex *a, Complex *b) ;
            void setRe_den1(Complex *a, Complex *b);
            void setIm_num1(Complex *a, Complex *b) ;
            void setIm_den1(Complex *a, Complex *b) ;
            void setRe_num2(Complex *a, Complex *b) ;
            void setRe_den2(Complex *a, Complex *b);
            void setIm_num2(Complex *a, Complex *b) ;
            void setIm_den2(Complex *a, Complex *b) ;


            Complex add(Complex a, Complex b);
            Complex diff(Complex a, Complex b);
            Complex multi(Complex a, Complex b);
            Complex div(Complex a, Complex b);
            void printResult(Complex *c);
            void display(Complex *a, Complex *b);
            ~Complex(){};
    };
}
double pgcd(double a , double b);