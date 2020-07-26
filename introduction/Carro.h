

#include <string>

using namespace std;

class Carro{
    public:
      // Attributes Statics
        static int tires;

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
     //Attributes
        string brand;
        int year;
};

