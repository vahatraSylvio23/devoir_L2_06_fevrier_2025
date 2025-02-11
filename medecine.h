#include <iostream>
#include "person.h"

using namespace std;

class Medecine : public pers::Person
{
    private:
        string speciality;
    public:
        void setSpeciality(string etab);
        string getSpeciality();
};

int setn();
string sets();