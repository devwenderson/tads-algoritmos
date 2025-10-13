#include<iostream>
using namespace std;

int conta_sublista(int a[], int tam) {
    int qty = 1;

    for (int i=0; i < tam; ++i) {
        int new_qty = 1;

        for (int j=i+1; j < tam; ++j) {
            if (a[i] <= a[j]) {
                new_qty = new_qty + 1;
            };

            if (a[j] > a[j+1]){
                break;
            }
        };

        if (new_qty > qty) qty = new_qty;
    };
    
    return qty;
}

int main() {
    int tam;
    cin >> tam;
    int a[tam];

    for (int i = 0; i < tam; ++i) cin >> a[i];

    int qty = conta_sublista(a, tam);
    cout << qty << endl;

    return 0;
}