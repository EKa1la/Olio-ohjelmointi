#include <iostream>
#include "notifikaattori.h"
#include "seuraaja.h"

using namespace std;

int main() {
    Notifikaattori n; // tulostaa "Luodaan notifikaattori"

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    cout << "Luodaan seuraaja A" << endl;
    cout << "Luodaan seuraaja B" << endl;
    cout << "Luodaan seuraaja C" << endl;

    n.lisaa(&a); // tulostaa lisäys
    n.lisaa(&b); // tulostaa lisäys
    n.lisaa(&c); // tulostaa lisäys

    n.tulosta(); // tulostaa kaikki seuraajat

    n.postita("Tama on viesti 1"); // kaikki saavat viestin

    n.poista(&b); // poistaa B
    n.postita("Tama on viesti 2"); // jäljellä olevat saavat viestin

    return 0;
}

