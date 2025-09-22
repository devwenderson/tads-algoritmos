#include <iostream>
using namespace std;

class Retangulo {
    public:
    double ladoA;
    double ladoB;

    Retangulo(double ladoA, double ladoB) {
        this->ladoA = ladoA;
        this->ladoB = ladoB;
    }

    double perimetro() {
        return 2*(this->ladoA + this->ladoB);
    }
};

int main () {
    Retangulo retangulo(2.7, 4.5);
    double perimetro = retangulo.perimetro();
    cout << perimetro << endl;
    return 0;
}