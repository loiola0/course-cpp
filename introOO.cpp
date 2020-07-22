#include <iostream>
#include <string>

using namespace std;

class Carro{
    private:
        string brand;
        int year;

    public:
        void setBrand(string brand){
            this->brand = brand;
        }

        string getBrand(){
            return brand;
        }

        void setYear(int year){
            if(year > 1990){
                this->year = year;
            }else{
                this->year = 1990;
            }
        }

        int getYear(){
            return year;
        }

        
};


int main(){

    Carro c1;

    c1.setBrand("ferrari");
    c1.setYear(1991);

    cout << c1.getBrand()<<" "<<c1.getYear()<<endl; 


}