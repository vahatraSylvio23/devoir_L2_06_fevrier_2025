#include "etablissement.h"

void Etablissement::setName(string ty)
{
    name = ty; 
}

void Etablissement::setAddress(string li)
{
    address = li;
}


string Etablissement::getName()
{
    return (name);
}

string Etablissement::getAddress()
{
    return (address);
}