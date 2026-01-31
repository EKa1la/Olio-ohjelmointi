#include "Asiakas.h"
#include <iostream>

int main() {

    Asiakas aapeli("Aapeli", 5000);
    aapeli.talletus(500);
    aapeli.luotonNosto(150);
    aapeli.showSaldo();

    cout << endl;

    Asiakas bertta("Bertta", 2500);

    cout << endl;
    cout << aapeli.getNimi() << endl;
    aapeli.showSaldo();

    aapeli.tiliSiirto(100, bertta);

    cout << bertta.getNimi() << endl;
    bertta.showSaldo();

    return 0;
}

