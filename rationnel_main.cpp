#include "rationnel.h"

int main()
{
    Rationnel a,b,c;

    cout << "entrer le numerateur de a : ";
    a.setNum(setn());
    cout << "entrer le denominateur de a : ";
    a.setDenom(setn());

    cout << "entrer le numerateur de b : ";
    b.setNum(setn());
    cout << "entrer le denominateur de b : ";
    b.setDenom(setn());

    simplify(&a);
    simplify(&b);

    cout << "somme : " ;
    c = a.plus(b);
    simple(c);
    cout << " = ";
    get(c);

    cout << "soustraction : ";
    c = a.minus(b);
    simple(c);
    cout << " = ";
    get(c);

    cout << "multiplication : ";
    c = a.multiply(b);
    simple(c);
    cout << " = ";
    get(c);

    cout << "division : ";
    c = a.divide(b);
    simple(c);
    cout << " = ";
    get(c);

    return 0;
}