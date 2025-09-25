#include <iostream>
using namespace std;

bool eh_primo(int n) {
    int divs = 0;
    bool ok;
    for (int i=1; i<n-1; ++i) {
        if ((n % i) == 0) {
            divs = divs + 1;
        }
    };
    
    if (divs > 1) {
        ok = false;
    } else {
        ok = true;
    };

    return ok;
}

int main() {
    int n;
    bool ok;
    cin >> n;
    ok = eh_primo(n);
    if (ok) {
        cout << "Primo" << endl;
    } else {
        cout << "Não" << endl;
    };
    return 0;
}