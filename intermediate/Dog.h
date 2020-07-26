#ifndef DOG_H
#define DOG_H

#include <string>

#include "Animal.h"

using namespace std;

class Dog : public Animal{
    public:

        Dog();
        virtual ~Dog();

        void setLegs(int legs);
        int getLegs();



    private:
        
        int legs;

};


#endif
