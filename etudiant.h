#include <iostream>
#include "person.h"

#ifndef ETUDIANT_H
#define ETUDIANT_H

using namespace std;
using namespace pers;

class Etudiant : public pers::Person
{
    private:
        string etablissement;
        string niveau;
    public:
        void setEtablissement(string etab);
        void setNiveau(string niv);
        string getEtablissement();
        string getNiveau();
};


#endif