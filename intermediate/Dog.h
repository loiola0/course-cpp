#ifndef DOG_H
#define DOG_H

#include <string>

#include "Mammal.cpp"

using namespace std;

class Dog : public Mammal{
    public:

        Dog();
        virtual ~Dog();

        void setLegs(int legs);
        int getLegs();



    private:
        
        int legs;

};


#endif
