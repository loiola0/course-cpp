#include<iostream>
#include<string>

#include "Fish.h"

using namespace std;


Fish::Fish(){

}

Fish::~Fish(){
    cout << "Object 'Fish' has destroyed"<<endl;
}


void Fish::setSweetWater(bool sweetWater){
    this->sweetWater = sweetWater;
}

string Fish::isSweetWater(){
    if(sweetWater){
        return "Yes";
    }else{
        return "No";
    }
}