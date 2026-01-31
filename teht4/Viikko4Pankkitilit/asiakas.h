#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"
#include <string>

class Asiakas {
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

public:
    Asiakas(string nimi, double luottoraja);

    string getNimi() const;
    void showSaldo() const;

    bool talletus(double summa);
    bool nosto(double summa);

    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    bool tiliSiirto(double summa, Asiakas &vastaanottaja);
};

#endif

