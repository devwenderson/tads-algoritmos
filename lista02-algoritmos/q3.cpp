#include<iostream>
using namespace std;

int maior_diferenca(int a[], int tam) {
    int maior = 0; // 1

    for (int i = 1; i < tam; ++i) {  // 1 + n + 2n = 1 + 3n
        if (a[i-1] + a[i] > maior) { // n + 2n + 3n = 6n
            maior = a[i-1] + a[i]; // n + 2n + 2n = 5n
        };
    }

    return maior; // 1
}

int main() {
    int tam;
    cin >> tam;
    int a[tam];
    for (int i = 0; i < tam; ++i) cin >> a[i];
    int maior = maior_diferenca(a, tam);
    cout << maior << endl; 
    return 0;
}