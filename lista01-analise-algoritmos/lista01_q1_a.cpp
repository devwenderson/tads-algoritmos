#include <iostream>
using namespace std;

int soma (int a, int b) {
    return a + b;
}

int main () {
    int a, b;
    cin >> a >> b;
    int res = soma(a, b);
    cout << res << endl;
    return 0;
}