#ifndef FISH_H
#define FISH_H



#include<string>

#include "Animal.cpp"

using namespace std;

class Fish : virtual public Animal{
    public:

        Fish();
        virtual ~Fish();

        void setSweetWater(bool sweetWater);
        string isSweetWater();
        void iAm();


    private:
        bool sweetWater;

};


#endif
