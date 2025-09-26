#include <iostream>
using namespace std;

int mdc(int a, int b){
    int resultado, maior, menor, resto;
    maior = a;
    menor = b;
    resto = maior % menor;

    while (resto != 0) {
        maior = menor;
        menor = resto;
        resto = maior % menor;
    };

    resultado = menor;
    return resultado;
}

int mmc(int a, int b) {
    
    int resultado = 1;
    int div = 2;

    while (a + b != 2) {
        if ((a % div == 0) || (b % div == 0)) {
            resultado *= div;
            if (a % div == 0) a = a / div;
            if (b % div == 0) b = b / div;
        } else {
            div += 1;
        }
    }
    return resultado;
}

struct fracao {
    int nume;
    int deno;
};

fracao soma(fracao &f1, fracao &f2) {
    fracao resultado;
    resultado.deno = mmc(f1.deno, f2.deno);
    resultado.nume = (f1.nume * (mmc(f1.deno, f2.deno)/f1.deno)) + (f2.nume * (mmc(f1.deno, f2.deno) / f2.deno));

    return resultado;
};

int main() {
    fracao f1, f2;
    cin >> f1.nume >> f1.deno;
    cin >> f2.nume >> f2.deno;
    fracao f3 = soma(f1, f2);
    int fra_mdc = mdc(f3.nume, f3.deno);
    f3.nume = f3.nume / fra_mdc;
    f3.deno = f3.deno / fra_mdc;
    cout << f3.nume << "/" << f3.deno << endl;

    return 0;
}