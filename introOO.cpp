#include <iostream>


#include "Carro.cpp"

using namespace std;


int main(){

    Carro c1;

    c1.setBrand("ferrari");
    c1.setYear(1991);

    cout << c1.getBrand()<<" "<<c1.getYear()<<endl; 


}