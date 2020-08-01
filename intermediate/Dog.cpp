#include<iostream>
#include<string>

#include "Dog.h"

using namespace std;


Dog::Dog(){

}

Dog::~Dog(){
    cout << "Object 'Dog' has destroyed"<<endl;
}

void Dog::setLegs(int legs){
    this->legs = legs;
}

int Dog::getLegs(){
    return this->legs;
}

void Mammal::iAm(){
    cout<<"I am a Dog"<<endl;
}

void Dog::iAmMammal(){
    cout << "I am a mammal." <<endl;
}

void Dog::iAm(){
    cout <<"I am a Dog"<<endl;
}
