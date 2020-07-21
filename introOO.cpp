#include <iostream>
#include <string>

using namespace std;

class Carro{
    private:
        string brand;
        int year;

    public:
        void setBrand(string x){
            brand = x;
        }

        string getBrand(){
            return brand;
        }

        void setYear(int y){
            if(y > 1990){
                year = y;
            }else{
                year = 1990;
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