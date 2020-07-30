#include <iostream>

#include "Pet.h"

using namespace  std;



Pet::Pet(){

}

Pet::~Pet(){
    
}

void Pet::setValue(double value){
    this->value = value;
}


void Pet::setBathFrequency(int bathFreq){
    this->bathFrequency = bathFreq;
}


void Pet::getValue(){
    cout<<"This Pet costs "<<"R$ "<<this->value<<endl;
}

void Pet::getBathFrequency(){
    cout<<"This Pet takes a bath "<<this->bathFrequency<<" in "<<this->bathFrequency<<" days."<<endl;
}
