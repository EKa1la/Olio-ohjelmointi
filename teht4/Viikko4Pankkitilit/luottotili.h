#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"

class Luottotili : public Pankkitili {
private:
    double luottoRaja = 0;

public:
    Luottotili(string nimi, double raja);

    bool deposit(double summa) override;
    bool withdraw(double summa) override;
};

#endif

