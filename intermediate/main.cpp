#include <cstring>
#include <iostream>
#include <string>

#include "Fish.cpp"
#include "Dog.cpp"

using namespace std;


void rationIdeal(Dog& c){
    cout <<"The ration Ideal is "<<c.ration<<endl;
}

int main(){
    Dog c1;
    rationIdeal(c1);

}