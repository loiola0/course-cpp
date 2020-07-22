
#include <string>
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

