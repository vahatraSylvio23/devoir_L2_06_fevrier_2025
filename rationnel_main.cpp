#include "rationnel.h"

int main()
{
    Rationnel Q,a,b;
    Q.setNum_1(&a, &b);
    Q.setDenom_1(&a, &b);
    Q.setNum_2(&a, &b);
    Q.setDenom_2(&a, &b);

    Q.plus(a, b);
    Q.minus( a, b);
    Q.multiply(a, b);
    Q.divide(a, b);

    return 0;
}