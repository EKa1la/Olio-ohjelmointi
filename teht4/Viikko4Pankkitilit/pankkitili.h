#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>
using namespace std;

class Pankkitili {
protected:
    string omistaja;
    double saldo = 0;

public:
    Pankkitili(string nimi);
    virtual ~Pankkitili() = default;

    double getBalance() const;

    virtual bool deposit(double summa);
    virtual bool withdraw(double summa);
};

#endif
