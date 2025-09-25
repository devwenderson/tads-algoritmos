#include <iostream>
using namespace std;

int calcula_maior(int a, int b) {
    if (a < b) {
        return b;
    } else {
        return a;
    };
}

int calcula_menor(int a, int b){
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int calcula_mdc(int a, int b){
    int mdc, maior, menor, resto;
    maior = calcula_maior(a, b);
    menor = calcula_menor(a, b);
    resto = maior % menor;

    while (resto != 0) {
        maior = menor;
        menor = resto;
        resto = maior % menor;
    };

    mdc = menor;
    return mdc;
}

int main() {
    int a, b, mdc;
    cin >> a >> b;
    mdc = calcula_mdc(a, b);
    cout << mdc << endl;

    return 0;
}