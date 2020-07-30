#include <cstring>
#include <iostream>
#include <string>

#include "Fish.cpp"
#include "Dog.cpp"

using namespace std;

int main(){

    Dog c1;
    Fish p1;
    
    c1.setName("Rex"); c1.setYear(2); c1.setLegs(4);
    p1.setName("Peixonauta"); p1.setYear(1); p1.setSweetWater(true);

    cout << c1.getName() <<" "<<c1.getYear()<< " "<< c1.getLegs()<<endl;

    cout << p1.getName() <<" "<<p1.getYear()<< " "<< p1.isSweetWater()<<endl;

    c1.iAmMammal();

    c1.iAm();
    p1.iAm();
    


}