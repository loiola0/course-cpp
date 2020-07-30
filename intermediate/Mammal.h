#ifndef MAMMAL_H
#define MAMMAL_H

#include <string>

#include "Animal.h"

using namespace std;

class Mammal : virtual public Animal{
    public:
        Mammal();
        virtual ~Mammal();
        void iAmMammal();
        void iAm();
    private:

    protected:
        int valor = 0;

};

#endif