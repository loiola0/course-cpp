

#include <string>

using namespace std;

class Carro{
    public:
        void setBrand(string brand);
        string getBrand();
        void setYear(int year);
        int getYear();
    private:
        string brand;
        int year;
};

