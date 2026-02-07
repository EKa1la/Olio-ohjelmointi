#ifndef SEURAAJA_H
#define SEURAAJA_H
using namespace std;
#include <iostream>
#include <string>


class Seuraaja {

private:
string nimi;

public:

Seuraaja* next = nullptr;

Seuraaja(string n) : nimi(n) {}

string getNimi() {
    return nimi;
}

void paivitys(string viesti) {
    cout << "Seuraaja " << nimi << " sai viestin " << viesti << endl;
}
};

#endif // SEURAAJA_H
