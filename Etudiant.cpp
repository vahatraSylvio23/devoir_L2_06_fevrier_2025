#include "etudiant.h"

using namespace pers;
void Etudiant::setEtablissement(string etab)
{
    etablissement = etab;
}

void Etudiant::setNiveau(string niv)
{
    niveau = niv;
}


string Etudiant::getEtablissement()
{
    return (etablissement);
}

string Etudiant::getNiveau()
{
    return (niveau);
}

