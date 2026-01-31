#include "Luottotili.h"
#include <iostream>

Luottotili::Luottotili(string nimi, double raja)
    : Pankkitili(nimi), luottoRaja(raja)
{
    saldo = raja; // saldo kertoo jäljellä olevan luoton
    cout << "Luottotili luotu " << omistaja
         << ":lle, luottoraja " << luottoRaja << endl;
}

bool Luottotili::withdraw(double summa) {
    if (summa <= 0) return false;
    if (saldo - summa < 0) return false;

    saldo -= summa;
    cout << "Luottotili: nosto " << summa
         << " tehty, luottoa jaljella " << saldo << endl;
    return true;
}

bool Luottotili::deposit(double summa) {
    if (summa <= 0) return false;
    if (saldo + summa > luottoRaja) return false;

    saldo += summa;
    cout << "Luottotili: velan maksu " << summa << " tehty" << endl;
    return true;
}
