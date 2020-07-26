#include<string>
#include<iostream>

#include "Animal.h"

using namespace std;

Animal::Animal(){

}

Animal::~Animal(){
    cout<<"The Object has destroyed"<<endl;
}

void Animal::setName(string name){
    this->name = name;
}

string Animal::getName(){
    return this->name;
}

void Animal::setYear(int year){
    this->year = year;
}

int Animal::getYear(){
    return this->year;
}