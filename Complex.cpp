#include "complex.h"

using namespace isa;

void Complex::setRe(Complex *a, Complex *b)
{
    cout << "entrer le reel de a : ";
    cin >> a->re;
    cout << "entrer le reel de b : ";
    cin >> b->re;
}

void Complex::setIm(Complex *a, Complex *b)
{
    cout << "entrer l'imaginaire de a : ";
    cin >> a->im;
    cout << "entrer l'imaginaire de b : ";
    cin >> b->im;    
}

Complex Complex::add(Complex a, Complex b)
{
    Complex c;
    cout << "la somme : " << a.re <<" + i" << a.im <<"  +  "<< b.re <<" + i" << b.im  << " = " << endl;
    c.re = a.re + b.re;
    c.im = b.im + a.im;
    cout << c.re <<" + i" << c.im << endl;
    return c;
}


Complex Complex::diff(Complex a, Complex b)
{
    Complex c;
    cout << "la difference : " << a.re <<" + i" << a.im <<"  -  "<< b.re <<" + i" << b.im  << " = " << endl;
    c.re = a.re - b.re;
    c.im = b.im - a.im;
    cout << c.re <<" + i" << c.im << endl;
    return c;
}

Complex Complex::multi(Complex a, Complex b)
{
    Complex c, temp1, temp2;
    cout << "la multiplication : " << a.re <<" + i" << a.im <<"  *  "<< b.re <<" + i" << b.im  << " = " << endl;
    
    temp1.re = a.re * b.re;
    temp2.re = a.re * b.im;

    temp1.im = a.im * b.re;
    temp2.im = a.im * b.im;
    temp2.im = -temp2.im;

    c.re = temp1.re + temp2.im;
    c.im = temp1.im + temp2.re;

    cout << c.re <<" + i" << c.im << endl;
    return c;
}


Complex Complex::div(Complex a, Complex b)
{
    Complex c, temp1, temp2, temp3,num, denom;
    cout << "la div : " << a.re <<" + i" << a.im <<"  /  "<< b.re <<" + i" << b.im  << " = " << endl;
        
    temp1.re = a.re * b.re;
    temp2.re = a.re * (- b.im);

    temp1.im = a.im * b.re;
    temp2.im = a.im * (- b.im);
    temp2.im = -temp2.im;

    num.re = temp1.re + temp2.im;
    num.im = temp1.im + temp2.re;
    
    temp1.re = b.re * b.re;
    temp2.re = b.re * (- b.im);

    temp1.im = b.im * b.re;
    temp2.im = b.im * (- b.im);
    temp2.im = -temp2.im;    
    
    denom.re = temp1.re + temp2.im;
    denom.im = temp1.im + temp2.re;
    
    c.re = num.re / (denom.re + denom.im);
    c.im = num.im / (denom.re + denom.im);
    cout << num.re <<" + i" << num.im << "/" << denom.re + denom.im << endl;
    return c;
}