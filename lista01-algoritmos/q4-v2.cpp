#include <iostream>
#include <chrono>

using namespace std;

bool prime(long long n) {
    int qty_divs = 0;
    for (long long d = 1; d<=n; ++d) {
        if (n % d == 0) qty_divs = qty_divs + 1;
    }
    return qty_divs == 2;
}

void start(long long n) {
        // Início do cronometro
    auto beg = chrono::high_resolution_clock::now();
    bool p = prime(n);
    auto end = chrono::high_resolution_clock::now();

    if (p) {
        cout << n << " is prime" << endl;
    }
    else {
        cout << n << " not is prime" << endl;
    }
    auto dur = end - beg;
    auto duration = chrono::duration_cast<chrono::microseconds>(dur);
    cerr << n << " Processing time: " << duration.count() << " microseconds(s)" << endl;
}

int main() {
    int n;
    cin >> n;
    long long x[n];

    for (int i = 0; i < n; ++i) {
        long long num;
        cin >> num;
        x[i] = num;
    }

    for (int i = 0; i < n; ++i) {
        start(x[i]);
    }

    return 0;
}