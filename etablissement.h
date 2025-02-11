#include <iostream>
#include "infrastructure.h"

using namespace std;

class Etablissement : public Infrastructure
{
    private:
        string name;
        string address;
    
    public:
        void setName(string etab);
        void setAddress(string niv);
        string getName();
        string getAddress();
};


int setn();

string sets();