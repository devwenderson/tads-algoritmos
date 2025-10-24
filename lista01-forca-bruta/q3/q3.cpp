#include<iostream>
using namespace std;

int maior_lista_contigua(int a[], int n) {
    int maior_lista = a[0];

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            int soma = 0;
            for (int k=i; k<j; k++) {
                soma = soma + a[k];
            }
            if (soma > maior_lista) maior_lista = soma;
        }
    }
    
    return maior_lista;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) 
        cin >> a[i];
    int maior_lista = maior_lista_contigua(a, n);
    cout << maior_lista << endl;
    return 0;
}