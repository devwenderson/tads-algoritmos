#include <iostream>
using namespace std;

int divisores(int n) {
    int divs;
    divs = 0;
    for (int i=1; i<n-1; ++i) {
        if (n % i == 0) {
            divs = divs + 1;
        };
    };

    return divs;
}

int main() {
    int n, divs;
    cin >> n;
    divs = divisores(n);
    cout << "Quantidade de divisores de " << n << ": " << divs << endl;
    return 0;
}