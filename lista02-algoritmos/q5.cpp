#include<iostream>
using namespace std;

bool verifica_numero(int a[], int tam, int n) {    
    for (int i = 0; i < tam; ++i) {
        for (int j = i+1; j < tam; ++j) {
            if (a[i] + a[j] == n) return true;
        };
    };

    return false;
}

int main() {
    int tam, n;
    cin >> tam;
    int a[tam];

    for (int i = 0; i < tam; ++i) cin >> a[i];
    
    cin >> n;

    bool existe = verifica_numero(a, tam, n);

    if (existe) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}