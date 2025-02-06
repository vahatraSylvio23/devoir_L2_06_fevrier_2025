#include "complexe_rationnelle.h"

using namespace isa;


void Complex::setRe_num1(Complex *a, Complex *b) 
{
    cout << "Entrer le numerateur reel 1 : ";
    cin >> a->re_num;
}
void Complex::setRe_den1(Complex *a, Complex *b)
{    
    cout << "Entrer le denominateur reel 1 : ";
    cin >> a->re_den;
}
    
void Complex::setIm_num1(Complex *a, Complex *b) 
{    
    cout << "Entrer le numerateur imaginaire 1 : ";
    cin >> a->im_num;
}

void Complex::setIm_den1(Complex *a, Complex *b) 
{    
    cout << "Entrer le denominateur imaginaire 1 : ";
    cin >> a->im_den;
}

void Complex::setRe_num2(Complex *a, Complex *b) 
{    
    cout << "Entrer le numerateur reel 2 : ";
    cin >> b->re_num;
}

void Complex::setRe_den2(Complex *a, Complex *b)
{
    cout << "Entrer le denominateur reel 2 : ";
    cin >> b->re_den;
}
void Complex::setIm_num2(Complex *a, Complex *b) 
{    
    cout << "Entrer le numerateur imaginaire 2 : ";
    cin >> b->im_num;
}

void Complex::setIm_den2(Complex *a, Complex *b) 
{    
    cout << "Entrer le denominateur imaginaire 2 : ";
    cin >> b->im_den;
}

void Complex::display(Complex *a, Complex *b)
{
    cout << endl << "a :";
    cout << "(" << a->re_num << "/" << a->re_den << ") + (" ;
    cout  << a->im_num << "/" << a->im_den << ")i" << endl ;
    cout << endl << "b :";
    cout << "(" << b->re_num << "/" << b->re_num << ") + (" ;
    cout  << b->im_num << "/" << b->im_den << ")i" << endl ;             
}

Complex Complex::add(Complex a, Complex b) 
{
    Complex sum;
    sum.re_num = a.re_num * b.re_den + b.re_num * a.re_den;
    sum.re_den = a.re_den * b.re_den;
    sum.im_num = a.im_num * b.im_den + b.im_num * a.im_den;
    sum.im_den = a.im_den * b.im_den;
    return sum;
}

Complex Complex::diff(Complex a, Complex b) 
{
    Complex diff;
    diff.re_num = a.re_num * b.re_den - b.re_num * a.re_den;
    diff.re_den = a.re_den * b.re_den;
    diff.im_num = a.im_num * b.im_den - b.im_num * a.im_den;
    diff.im_den = a.im_den * b.im_den;
    return diff;
}

Complex Complex::multi(Complex a, Complex b) 
{
    Complex prod;
    prod.re_num = a.re_num * b.re_num - a.im_num * b.im_num;
    prod.re_den = a.re_den * b.re_den;
    prod.im_num = a.re_num * b.im_num + a.im_num * b.re_num;
    prod.im_den = a.re_den * b.im_den;
    return prod;
}

Complex Complex::div(Complex a, Complex b) 
{
    Complex quotient;
    int denom = b.re_num * b.re_num + b.im_num * b.im_num;
    
    quotient.re_num = (a.re_num * b.re_num + a.im_num * b.im_num);
    quotient.re_den = a.re_den * denom;
    
    quotient.im_num = (a.im_num * b.re_num - a.re_num * b.im_num);
    quotient.im_den = a.im_den * denom;
    
    return quotient;
}


void Complex::printResult(Complex *c) 
{
    c->re_num = c->re_num /pgcd(c->re_num, c->re_den);
    c->re_den = c->re_den /pgcd(c->re_num, c->re_den);
    c->im_num = c->im_num /pgcd(c->re_num, c->re_den);
    c->im_den = c->im_den/pgcd(c->re_num, c->re_den);

    cout << "(" << c->re_num << "/" << c->re_den << ") + (" 
         << c->im_num << "/" << c->im_den << ")i" << endl;
}


double pgcd(double a , double b)
{
    while(b != 0)
    {
        double temp = b;
        b = (int)a % (int)b;
        a = temp;
    }
    return a;
}