#include "Pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili(string nimi) : omistaja(nimi) {
    cout << "Pankkitili luotu " << omistaja << ":lle" << endl;
}

double Pankkitili::getBalance() const {
    return saldo;
}

bool Pankkitili::deposit(double summa) {
    if (summa <= 0) return false;

    saldo += summa;
    cout << "Pankkitili: talletus " << summa << " tehty" << endl;
    return true;
}

bool Pankkitili::withdraw(double summa) {
    if (summa <= 0 || summa > saldo) return false;

    saldo -= summa;
    cout << "Pankkitili: nosto " << summa << " tehty" << endl;
    return true;
}

