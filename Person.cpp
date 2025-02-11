#include "person.h"

using namespace std;
using namespace pers;

void Person::setName(string n)
{
    name = n;
}
void Person::setAge(int a)
{
    age = a;
}
void Person::setAddress(string addr)
{
    address = addr;
}
string Person::getName()
{
    return (name);
}
int Person::getAge()
{
    return (age);
}
string Person::getAddr()
{
    return (address);
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