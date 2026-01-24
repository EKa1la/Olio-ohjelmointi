#include "chef.h"
#include <iostream>



Chef::Chef(const std::string& name)
{
    chefName = name;
    std::cout << "Chef " << chefName << " luotu. " << std::endl;
}

// Destruktori
Chef::~Chef()
{
    std::cout << "Chef " << chefName << " tuhoutuu. " << std::endl;
}

// Palauttaa kokin nimen
std::string Chef::getName() const
{
    return chefName;
}

 // Salaatin teko
 int Chef::makeSalad (int ingredientCount)
    {
        int servings = ingredientCount / 5;
        std::cout << "Chef " << chefName << " tekee " << servings << " salaattia. " << std::endl;
        return servings;
    }

// Keiton teko
    int Chef::makeSoup (int ingredientCount)
    {
        int servings = ingredientCount / 3;
        std::cout << "Chef " << chefName << " tekee " << servings << " keittoa. " << std::endl;
        return servings;
    }


