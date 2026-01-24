#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"


class ItalianChef : public Chef
{
public:
    ItalianChef(const std::string& name);
    ~ItalianChef();

    bool askSecret (const std::string& inputPassword, int flours, int water);

private:
    int makePizza (int flours, int water);
    int water;
    int flour;
    std::string password;

};

#endif // ITALIANCHEF_H
