#include "italianchef.h"
#include <iostream>
#include <algorithm>

ItalianChef::ItalianChef(const std::string& name)
    : Chef (name) // Kutsutaan Chef-luokan konstruktoria nimen asettamiseksi
{
    password = "pizza";
    flour = 0;
    water = 0;

    std::cout << "ItalianChef " << chefName << " luotu. " << std::endl;
}

// Destruktori
ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef " << chefName << " tuhoutuu. " << std::endl;
}

// Salasanan tarkistus
bool ItalianChef::askSecret (const std::string& inputPassword, int flours, int water)
{
    if (inputPassword == password) {
        makePizza(flours, water);
        return true;
    } else {
        std::cout << "Väärä salasana!" << std::endl;
        return false;
    }
}
// Pizzan teko
int ItalianChef::makePizza (int flours, int water)
{
    int servings = std::min(flours / 5, water / 5);
    std::cout << "ItalianChef " << chefName << " tekee " << servings << " pizzaa. " << std::endl;
    return servings;
}
