#include <iostream>
#include <string>

using namespace std;

class Carro{
    public:
        string marca;
        int ano;
        string cor;


};


int main(){

    Carro c1;

    c1.marca = "fiat";
    c1.ano = 2020;
    c1.cor = "preto";

    cout<<c1.marca<<" "<<c1.cor<<" "<<c1.ano<<endl;


}