#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
using namespace std;
#include "Seuraaja.h"
#include <iostream>

class Notifikaattori
{
private:
    Seuraaja* seuraajat = nullptr;

public:

    Notifikaattori();
    void lisaa(Seuraaja *);
    void tulosta();
    void postita(string);
    void poista(Seuraaja *);




};

#endif // NOTIFIKAATTORI_H
