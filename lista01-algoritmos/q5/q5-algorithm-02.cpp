#include <iostream>
#include <chrono>

using namespace std;

bool primo(long long n) {
    int qty_divs = 0;
    for (long long i = 1; i <= n/2; ++i) {
        if (n % i == 0) qty_divs = qty_divs + 1; 
    }
    return qty_divs == 1;
}

int main() {
    long long n;
    cin >> n;

    auto beg = chrono::high_resolution_clock::now();
    bool p = primo(n);
    auto end = chrono::high_resolution_clock::now();

    if (p) {
        cout << n << " is prime" << endl;
    }
    else {
        cout << n << " not is prime" << endl;
    }

    auto dur = end - beg;
    auto duration = chrono::duration_cast<chrono::microseconds>(dur);
    cerr << duration.count() << endl;
    return 0;
}