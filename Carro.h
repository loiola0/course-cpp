

#include <string>

using namespace std;

class Carro{
    public:
      //Constructors
        Carro();
        Carro(string brand, int year);

      //Destroyers
        ~Carro();

      //Methods
        void setBrand(string brand);
        string getBrand();
        void setYear(int year);
        int getYear();
    private:
        string brand;
        int year;
};

