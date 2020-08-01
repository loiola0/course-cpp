#ifndef MAMMAL_H
#define MAMMAL_H

#include <string>

#include "Animal.h"

using namespace std;

class Mammal : virtual public Animal{
    public:
        Mammal();
        virtual ~Mammal();
        virtual void iAmMammal() = 0;
        virtual void iAm() = 0;
    private:

    protected:
        int valor = 0;

};

#endif