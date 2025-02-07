#include "rationnel.h"

void Rationnel::setNum(double n)
{
    num = n;
}

void Rationnel::setDenom(double n)
{
    den = n;
}

double Rationnel::getNum()
{
    return this->num;
}

double Rationnel::getDenom()
{
    return this->den;
}

Rationnel Rationnel::plus(Rationnel a)
{
    Rationnel r;
    r.num = (a.getNum() * this->getDenom() + this->getNum() * a.getDenom());
    r.den = (this->getDenom() * a.getDenom());
    return r;
}

Rationnel Rationnel::minus(Rationnel a)
{
    Rationnel r;
    r.num = (a.getNum() * this->getDenom() - this->getNum() * a.getDenom());
    r.den = (this->getDenom() * a.getDenom());
    return r;
    }

Rationnel Rationnel::multiply(Rationnel a)
{
    Rationnel r;
    r.num = (a.getNum() * this->getNum());
    r.den = (this->getDenom() * a.getDenom());
    return r;
}

Rationnel Rationnel::divide(Rationnel a)
{
    Rationnel r;
    r.num = (this->getNum()  * a.getDenom());
    r.den = (this->getDenom() * a.getNum());
    return r;
}


void get(Rationnel c)
{   
    cout << c.num/c.den << endl;
}

void simplify(Rationnel *c)
{
    int i,n;
    if(c->num > c->den)
    {
        for(i = c->num ; i > 0 ; i--)
        {
            if((int)c->num % i == 0 && (int)c->den % i == 0)
            {
                break;
            }
        }
    }
    else if(c->num < c->den)
    {
        for(i = c->den ; i > 0 ; i--)
        {
            if((int)c->num % i == 0 && (int)c->den % i == 0)
            {
                break;
            }
        }
    }
    c->num = c->num / i;
    c->den = c->den / i;
}

void simple(Rationnel c)
{
    cout << c.num << "/" << c.den;
}
double setn()
{
    double n;
    cin >> n;
    return (n);
}