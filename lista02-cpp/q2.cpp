#include <iostream>
#include <cmath>
using namespace std;

// USANDO RECURSIVIDADE
double raiz_rec(double n, double r_anterior)
{
    double r_candidata = (r_anterior + (n / r_anterior)) / 2.0;
    cerr << "DEBUG: raiz_candidata = " << r_candidata << endl;
    if (fabs(r_candidata - r_anterior) < 0.0000001) {
        return r_candidata;
    };

    return raiz_rec(n, r_candidata);
}

// USANDO LAÇO
double raiz_laco(double n)
{
    double r_anterior = 1;
    double r_candidata = (r_anterior + (n / r_anterior)) / 2.0;
    while (fabs(r_candidata - r_anterior) > 0.0000001) {
        double r_anterior = r_candidata;
        double r_candidata = (r_anterior + (n / r_anterior)) / 2.0;
    }
    return r_candidata;
}

double raiz(double n)
{
    return raiz_rec(n, 1);
}

int main()
{
    double n;
    cin >> n;
    double r = raiz(n);
    cout << r << endl;
    return 0;
}