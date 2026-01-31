#include "Asiakas.h"
#include <iostream>

Asiakas::Asiakas(string nimi, double luottoraja)
    : nimi(nimi),
    kayttotili(nimi),
    luottotili(nimi, luottoraja)
{
    cout << "Asiakkuus luotu " << nimi << endl;
    showSaldo();
}

string Asiakas::getNimi() const {
    return nimi;
}

void Asiakas::showSaldo() const {
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double summa) {
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa) {
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa) {
    return luottotili.withdraw(summa);
}

bool Asiakas::tiliSiirto(double summa, Asiakas &vastaanottaja) {
    if (summa <= 0) return false;

    cout << "Pankkitili: " << nimi << " siirtaa "
         << summa << " " << vastaanottaja.getNimi() << ":lle" << endl;

    if (!kayttotili.withdraw(summa)) return false;

    vastaanottaja.kayttotili.deposit(summa);
    return true;
}

