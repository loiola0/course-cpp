#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>

using namespace std;

class Animal{
    public:
        Animal();
        virtual ~Animal();

        void setName(string name);
        string getName();

        void setYear(int year);
        int getYear();

        //método abstrasto
        virtual void iAm() = 0;


    private:
        string name;
        int year;
};


#endif