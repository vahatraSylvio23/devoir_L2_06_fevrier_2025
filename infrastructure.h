#include <iostream>

using namespace std;

class Infrastructure
{
    private:
        string type;
        string adress;
    
    public:
        void setType(string etab);
        void setAdress(string niv);
        string getType();
        string getAdress();
};

int setn();
string sets();