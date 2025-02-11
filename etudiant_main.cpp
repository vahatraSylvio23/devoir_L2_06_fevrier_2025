#include "etudiant.h"

using namespace pers;
int main()
{
    Etudiant etu;
    cout << "Enter person name: ";
    etu.setName(sets());
    cout << "enter person age: ";
    etu.setAge(setn());
    cout << "enter person establishement: ";
    etu.setEtablissement(sets());
    cout << "enter the adress of the person: ";
    etu.setAddress(sets());

    cout << endl;
    cout << "information: ";
    cout << endl;
    cout << "Name: " << etu.getName() << endl;
    cout << "Age: " << etu.getAge() << endl;
    cout << "Establishement: " << etu.getEtablissement() << endl;
    cout << "Adress: " << etu.getAddr() << endl;

    return 0;
}