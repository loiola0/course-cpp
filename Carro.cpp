
#include <string>
#include <iostream>
using namespace std;

#include "Carro.h"

void Carro::setBrand(string brand){
        this->brand = brand;
}

string Carro::getBrand(){
    return brand;
}

void Carro::setYear(int year){
    if(year > 1990){
        this->year = year;
    }else{
        this->year = 1990;
    }
}

int Carro::getYear(){
    return year;
}

Carro::Carro(){
    this->brand = "FIAT";
}

Carro::Carro(string brand, int year){
    this->brand = brand;
    this->year = year;
}

Carro::~Carro(){
    cout<<"The Car Was Destroyed!"<<endl;
}

int Carro::tires = 4;
