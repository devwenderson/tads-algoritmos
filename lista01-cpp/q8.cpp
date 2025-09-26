#include <iostream>
using namespace std;

int calcula_mdc(int a, int b){
    int mdc, maior, menor, resto;
    maior = a;
    menor = b;
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
    int a, b, mdc, maior, menor;
    cin >> a >> b;
    maior = b;
    menor = a;
    if (a > b) {
        maior = a;
        menor = b;
    };
    mdc = calcula_mdc(a, b);
    cout << mdc << endl;

    return 0;
}