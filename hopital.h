#include <iostream>
#include "infrastructure.h"

using namespace std;

class Hopital : public Infrastructure
{
    private:
        string name;
    public:
        void Hopital::setName(string ty);
        string Hopital::getName();
};