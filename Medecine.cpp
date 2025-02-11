#include <iostream>
#include "person.h"
#include "medecine.h"

using namespace std;

void Medecine::setSpeciality(string spec)
{
    speciality = spec;
}
string Medecine::getSpeciality()
{
    return (speciality);
}


int setn()
{
    int n;
    cin >> n;
    return n;
}

string sets()
{
    string s;
    cin >> s;
    return s;
}