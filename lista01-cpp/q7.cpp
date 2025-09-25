#include <iostream>
using namespace std;

int menor(int a, int b) {
    if (b < a) {
        return b;
    } else {
        return a;
    }
}

bool primos_entre_si(int a, int b) {
    bool ok = true;
    int n = menor(a, b);
    for (int i=2; i<n; ++i) {
        if ((a % i == 0) && (b % i == 0)) {
            ok = false;
        }
    };
    return ok;
}

int main() {
    int a, b;
    cin >> a >> b;
    bool ok = primos_entre_si(a, b);
    if (ok) {
        cout << "Primos entre si" << endl;
    } else {
        cout << "Não primos entre si" << endl;
    }
    return 0;
}