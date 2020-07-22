#include <iostream>


#include "Carro.cpp"

using namespace std;


int main(){

    Carro c1;

   
    c1.setYear(1991);

    Carro c2("BMW",2014);

    c2.setYear(2019);

    cout <<"Carro-01: "<<c1.getBrand()<<" "<<c1.getYear()<<endl;
    cout <<"Carro-02: "<<c2.getBrand()<<" "<<c2.getYear()<<endl; 


}