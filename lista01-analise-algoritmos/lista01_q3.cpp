#include <iostream>
using namespace std;

double potencia_double(double base, int expoente) {
    if (expoente == 1) {
        return base;
    } else {
        return base * potencia_double(base, expoente-1);
    }
}

float potencia_float(float base, int expoente) {
    if (expoente == 1) {
        return base;
    } else {
        return base * potencia_float(base, expoente-1);
    }
}

class Circulo {
    public:
    double diametro_double;
    float diametro_float;

    Circulo (double diametro_double = 0, float diametro_float = 0) {
        this->diametro_double = diametro_double;
        this->diametro_float = diametro_float;
    }

    double area_double() {
        double raio = diametro_double / 2;
        return 3.14159 * (potencia_double(raio, 2));
    }

    float area_float() {
        float raio = diametro_float / 2;
        return 3.14159 * (potencia_float(raio, 2));
    }
};

int main() {
    double diametro_double;
    float diametro_float;
    cout << "Informe o diametro (Double): ";
    cin >> diametro_double;
    cout << "Informe o diametro (float): ";
    cin >> diametro_float;

    Circulo circulo1(diametro_double, diametro_float);
    double res = circulo1.area_double();

    cout << res << endl;
    return 0;
}