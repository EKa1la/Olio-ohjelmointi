#include <iostream>
#include "italianchef.h"


int main()
{
    // Luo ItalianChef-olio
    ItalianChef kokki("Mario");

    // Perityt metodit (Chef)
    kokki.makeSalad(12);  // pitäisi tehdä 2 salaattia
    kokki.makeSoup(10);   // pitäisi tehdä 3 keittoa

    // Salaisen pizzan kokeilu
    kokki.askSecret("pizza", 20, 15); // oikea salasana
    kokki.askSecret("wrong", 20, 15); // väärä salasana

    return 0;
}
