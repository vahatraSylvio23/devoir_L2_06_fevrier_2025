#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Rationnel
{
    public:
        double num, den;
        Rationnel(){};
        void setNum_1(Rationnel *a , Rationnel *b);
        void setNum_2(Rationnel *a, Rationnel *b);
        void setDenom_1(Rationnel *a, Rationnel *b);
        void setDenom_2(Rationnel *a, Rationnel *b);
        void plus(Rationnel a, Rationnel b);
        void minus(Rationnel a, Rationnel b);
        void multiply(Rationnel a, Rationnel b);
        void divide(Rationnel a, Rationnel b);
        ~Rationnel(){};
};
/*         void simplify(Rationnel *a, Rationnel *b);
        void gcd(Rationnel c);
 */