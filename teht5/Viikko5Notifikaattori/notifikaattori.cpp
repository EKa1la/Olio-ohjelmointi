#include "notifikaattori.h"
#include <iostream>




Notifikaattori::Notifikaattori() {
cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja* uusi) {

        // Asetetaan uuden seuraajan next osoittamaan nykyiseen listan alkuun
        uusi->next = seuraajat;

        // Päivitetään lista alkamaan uudesta seuraajasta
        seuraajat = uusi;

        // Tulostetaan viesti, kuten esimerkkitulostuksessa
        std::cout << "Notifikaattori lisaa seuraajan " << uusi->getNimi() << std::endl;
    }

void Notifikaattori::tulosta() {

    std::cout << "Notifikaattorin seuraajat:" <<std::endl;

        Seuraaja* o = seuraajat;
        while (o != nullptr) {
            std::cout << o->getNimi() << std::endl;
            o = o->next;
        }
    }

void Notifikaattori::postita(string uusiviesti) {


    std::cout << "Notifikaattori postaa viestin " << uusiviesti << std::endl;

    Seuraaja* o = seuraajat;
    while(o != nullptr) {
        o->paivitys(uusiviesti);
        o = o->next;
    }
}

void Notifikaattori::poista(Seuraaja * poistettava) {

    if (seuraajat == nullptr) return;  // lista tyhjä, ei mitään tehtävää

    // erityistapaus: poistettava on listan alku
    if (seuraajat == poistettava) {
        seuraajat = seuraajat->next;
        std::cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << std::endl;
        return;
    }

    // etsitään poistettavan edeltäjä
    Seuraaja* o = seuraajat;
    while (o->next != nullptr) {
        if (o->next == poistettava) {
            o->next = poistettava->next;  // ohitetaan poistettava
            std::cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << std::endl;
            return;
        }
        o = o->next;
    }
}




