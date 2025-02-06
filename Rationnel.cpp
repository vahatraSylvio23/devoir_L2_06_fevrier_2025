#include "rationnel.h"

void Rationnel::setNum_1(Rationnel *a , Rationnel *b)
{
    cout << "entrer le numerateur 1 : ";
    cin >> a->num;
}

void Rationnel::setNum_2(Rationnel *a , Rationnel *b)
{
    cout << "entrer le numerateur 2 : ";
    cin >> b->num;
}

void Rationnel::setDenom_1(Rationnel *a , Rationnel *b)
{
    cout << "entrer le denominateur 1 : ";
    cin >> a->den;
}

void Rationnel::setDenom_2(Rationnel *a , Rationnel *b)
{
    cout << "entrer le denominateur 2 : ";
    cin >> b->den;
}

void Rationnel::plus(Rationnel a, Rationnel b)
{
    cout << "somme : ";
    cout << "(" << a.num << "/" << a.den << ")" << "+" << "(" << b.num << "/" << b.den << ")  = " ;
    cout << (a.num/a.den) + (b.num/a.den) << endl;
}

void Rationnel::minus(Rationnel a, Rationnel b)
{
    cout << "difference : ";
    cout << "(" << a.num << "/" << a.den << ")" << "-" << "(" << b.num << "/" << b.den << ")  = ";
    cout << (a.num/a.den) - (b.num/a.den) << endl;
}

void Rationnel::divide(Rationnel a , Rationnel b)
{
    cout << "division : ";
    cout << "(" << a.num << "/" << a.den << ")" << "/" << "(" << b.num << "/" << b.den << ")  = " ;
    cout << (a.num/a.den) / (b.num/a.den) << endl;
}

void Rationnel::multiply(Rationnel a , Rationnel b)
{
    cout << "multiplication : ";
    cout << "(" << a.num << "/" << a.den << ")" << "*" << "(" << b.num << "/" << b.den << ")  = " ;
    cout << (a.num/a.den) * (b.num/a.den) << endl;
}
/* 
void gcd(Rationnel *c)
{
    int i;
    if(c->num > c->den)
    {
        for(i = c->num ; i > 0 ; i--)
        {
            if(c->num % i == 0 && c->den % i == 0)
            {
                break;
            }
        }
    }
    else if(c->num < c->den)
    {
        for(i = c->den ; i > 0 ; i--)
        {
            if(c->num % i == 0 && c->den % i == 0)
            {
                break;
            }
        }
    }
    
}


void simplify(Rationnel *a, Rationnel *b)
{
    if(a->num == 1 || b->num == 1)
    {

    }
}
 */