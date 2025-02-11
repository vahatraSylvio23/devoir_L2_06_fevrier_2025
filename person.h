#include <iostream>
#include <string>

using namespace std;

namespace pers
{
    class Person
    {
        private:
            string name;
            int age;
            string address;
        public:
            void setName(string n);
            void setAge(int a);
            void setAddress(string addr);
            string getName();
            int getAge();
            string getAddr();
    };
}
string sets();

int setn();
