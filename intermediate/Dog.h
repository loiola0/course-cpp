#ifndef DOG_H
#define DOG_H

#include <string>

#include "Mammal.cpp"
#include "Pet.cpp"

using namespace std;

class Dog : public Mammal, public Pet{
    public:

        Dog();
        virtual ~Dog();

        void setLegs(int legs);
        int getLegs();
        void iAmMammal();
        void iAm();



    private:
        
        int legs;

};


#endif
