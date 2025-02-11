#include "infrastructure.h"

void Infrastructure::setType(string ty)
{
    type = ty; 
}

void Infrastructure::setAdress(string li)
{
    adress = li;
}


string Infrastructure::getType()
{
    return (type);
}

string Infrastructure::getAdress()
{
    return (adress);
}