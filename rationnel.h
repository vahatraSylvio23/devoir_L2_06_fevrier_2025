#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Rationnel
{
    public:
        double num, den;
        Rationnel()
        {
            this->num = num;
            this->den = den; 
        };
        
        void setNum(double n);
        void setDenom(double n);

        double getNum();
        double getDenom();

        Rationnel plus(Rationnel a);
        Rationnel minus(Rationnel a);
        Rationnel multiply(Rationnel a);
        Rationnel divide(Rationnel a);
        ~Rationnel(){};
};

double setn();
void simplify(Rationnel *c);
void get(Rationnel c);
void simple(Rationnel c);
