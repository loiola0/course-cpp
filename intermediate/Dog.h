#ifndef DOG_H
#define DOG_H

#include <string>

#include "Mammal.cpp"
#include "Pet.cpp"

using namespace std;

class Dog : public Mammal, public Pet{
    public:

        Dog();
        Dog(string name, int year);
        virtual ~Dog();
        int getLegs();
        void iAmMammal();
        void iAm();
        static int calAgeHuman(int year);

    private:
        
        const static int legs = 4;

};


#endif
