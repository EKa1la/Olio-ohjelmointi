#include <iostream>
#include "student.h"
#include <vector>


using namespace std;

int main()
{

    vector<student> Luokka;
    Luokka.reserve(10);
    Luokka.emplace_back(student("Saku Sammakko", 1));
    Luokka.emplace_back("Jeppe Niilonpoika", 2);
    Luokka.emplace_back("Aku Ankka",3);

    for(auto & s : Luokka)
    {
        cout<< " Student = "<< s.getName() <<endl;
    }
    sort(Luokka.begin(),Luokka.end(),[}()])

    return 0;
}
