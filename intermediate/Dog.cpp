#include<iostream>
#include<string>

#include "Dog.h"

using namespace std;


Dog::Dog(){

}

Dog::Dog(string name,int year){
    setName(name);
    setYear(year);
}

Dog::~Dog(){
    cout << "Object 'Dog' has destroyed"<<endl;
}

int Dog::getLegs(){
    return this->legs;
}

void Dog::iAmMammal(){
    cout << "I am a mammal." <<endl;
}

void Dog::iAm(){
    cout <<"I am a Dog"<<endl;
}

int Dog::calAgeHuman(int year){
    return year * 7;
}
