#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef
{
protected:
    std::string chefName; // # tarkoittaa protected

public:
    Chef(const std::string& name);
    ~Chef();

    std::string getName() const;
    int makeSalad(int ingredientCount);
    int makeSoup(int ingredientCount);
};

#endif // CHEF_H
